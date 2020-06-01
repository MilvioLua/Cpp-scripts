#include <iostream>
#include "math.h"
#ifndef MATH
#define MATH


double area(double lenght, double width) {
	return lenght * width;
}

double area(double lenght) {
	return lenght * lenght;
}

double area(Retangle rectangle) {
	return rectangle.length * rectangle.width;
}

double pow(double base, double pow)
{
	double total = 1;
	for (int i = 0; i < pow; i++) {
		total *= base;
	}
	return total;
}

#endif // !