#include <stdio.h>
#include <stdbool.h>

#include "triangleSolver.h"

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle\n";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle\n";
	}
	else if ((side1 == side2 && side1 != side3) || 
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle\n";
	}
	else {
		result = "Scalene triangle\n";
	}

	return result;
}

void anglesOfTriangle(int a, int b, int c)
{
	double angleA, angleB, angleC, s;
	const double PI = 3.1415926;

	s = ((b * b) + (c * c) - (a * a)) / (2 * b * c);
	angleA = acos(s) * 180 / PI;
	angleB = acos(((a * a) + (c * c) - (b * b)) / (2 * a * c)) * (180 / PI);
	angleC = acos(((b * b) + (a * a) - (c * c)) / (2 * b * a)) * 180 / PI;

	printf("The angle between %d and %d is %g dgree.\n", b, c, angleA);
	printf("The angle between %d and %d is %g dgree.\n", a, c, angleB);
	printf("The angle between %d and %d is %g dgree.\n", b, a, angleC);
}