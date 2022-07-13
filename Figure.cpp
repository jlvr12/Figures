#include "Figure.h"

void Figure::printInfo()
{
	std::cout << "this is a " << name << std::endl;
	std::cout << " area: " << calcArea() << std::endl;
	std::cout << " perimeter: " << calcPerimeter() << std::endl;
}
