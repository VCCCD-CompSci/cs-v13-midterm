#pragma once
class VertRectangle
{
private:
	double height;
	double width;
public:
	double area;
	double perimeter;
	VertRectangle();
	VertRectangle(double h, double w);
	double GetArea();
	double GetPerimeter();
	void Display();
	~VertRectangle();
};

