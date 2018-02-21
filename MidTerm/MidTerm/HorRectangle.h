#pragma once
class HorRectangle
{
private:
	double height;
	double width;
public:
	double area;
	double perimeter;
	HorRectangle();
	HorRectangle(double h, double w);
	double GetArea();
	double GetPerimeter();
	void Display();
	~HorRectangle();
};

