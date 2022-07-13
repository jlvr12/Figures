#include "Square.h"
#include "Circle.h"
#include "Equilateral.h"
#include "Rectangle.h"
#include <vector>
using namespace std;

int main()
{


	vector<Figure*> figures;
	figures.push_back(new Square(2));
	figures.push_back(new Square(54));
	figures.push_back(new Circle(1));
	figures.push_back(new Circle(3.4));
	figures.push_back(new Equilateral(3));
	figures.push_back(new Equilateral(7));
	figures.push_back(new Rectangle(7,8));
	figures.push_back(new Rectangle(30,27));


	double h = 1.3;
	for (int i = 0; i < figures.size(); i++)
	{
		figures[i]->printInfo();
		cout << "\n"; 
	}

	return 0;
}