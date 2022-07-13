#pragma once
#include "Figure.h"
class Rectangle :
	public Figure
{
private:
	double height;
	double width; 
public:
	Rectangle() { height = 0; width = 0; name = "rectangle"; };
	Rectangle(double a, double b);
	double calcArea() override;
	double calcPerimeter() override;
};

