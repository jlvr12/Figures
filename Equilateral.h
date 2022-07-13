#pragma once
#include "Figure.h"
class Equilateral :
	public Figure
{
private:
	double size;
public:
	Equilateral() { size = 0; name = "Equilateral"; };
	Equilateral(double a);
	double calcArea() override;
	double calcPerimeter() override;
};

