#include "Rectangle.h"

Rectangle::Rectangle(double a, double b)
{
	height = a;
	width = b;
	name = "rectangle";
}

double Rectangle::calcArea()
{
	return height * width;
}

double Rectangle::calcPerimeter()
{
	return 2*(height+width);
}