#include "Circle.h"


double Circle::calcArea()
{
	return 3.14159265 * radius * radius;
}

double Circle::calcPerimeter() //circumference
{
	return 2 * 3.14159265 * radius;
}
