#pragma once
/*Да се напише функция със сигнатура bool CheckRectangular(const Point&, const Point&, const Point&),
където Point е структура, която има две член-данни за координати в Декартова координатна система.
Функцията да връща true ако трите точки в координатната система образуват правоъгълен триъгълник
и false в противен случай.*/

struct Point {
    int x, y;
};

int secondPower(int number) {
    return number * number;
}

int getSide(const Point& a, const Point& b) {
    return secondPower(a.x - b.x) + secondPower(a.y - b.y);
}

bool CheckRectangular(const Point& a, const Point& b, const Point& c) {
    int firstSide = getSide(a, b);
    int secondSide = getSide(a, c);
    int thirdSide = getSide(b, c);

    if (firstSide != 0 && secondSide != 0 && thirdSide != 0) {
        if (firstSide == (secondSide + thirdSide)) {
            return true;
        }

        if (secondSide == (firstSide + thirdSide)) {
            return true;
        }

        if (thirdSide == (firstSide + secondSide)) {
            return true;
        }
    }
    return false;
}