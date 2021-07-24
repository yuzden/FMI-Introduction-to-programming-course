#pragma once
/*Да се напише функция на C++, която приема като параметри две отсечки в декартовата координатна система.
За представянето на отсечка, използвайте създадена от вас структура (struct, запис). 
Функцията да върне дължината на общата им част, ако отсечките лежат на права, 
успоредна на една от координатните оси или -1 в противен случай.*/
#include <math.h>
struct Points {
	int x, y;
};

int my_pow(int num) {
	return num * num;
}

int dist(const Points& a, const Points& b) {
	return sqrt(my_pow(a.x - b.x) + my_pow(a.y - b.y));
}
int common_part(const Points& a, const Points& b, const Points& c, const Points& d) {
	
	if (a.x == b.x && b.x == c.x && c.x == d.x) {
		if (a.y < c.y || b.y < c.y) {
			int segm1 = dist(a, b);
			int segm2 = dist(c, d);
			if (segm1 > segm2) {
				return segm1 - segm2;
			}
			return segm2 - segm1;
		}
	}

	if (a.y == b.y && b.y == c.y && c.y == d.y) {
		if (a.x > c.x || b.x > c.x) {
			int segm1 = dist(a, b);
			int segm2 = dist(c, d);
			if (segm1 > segm2) {
				return segm1 - segm2;
			}
			return segm2 - segm1;
		}
	}
	return -1;
}