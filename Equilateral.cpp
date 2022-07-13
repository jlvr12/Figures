#include "Equilateral.h"

Equilateral::Equilateral(double a)
{
	size = a;
	name = "equilateral triangle";
}

double Equilateral::calcArea()
{
	return (size * size)*sqrt(3)/4;
}

double Equilateral::calcPerimeter()
{
	return 3*size;
}