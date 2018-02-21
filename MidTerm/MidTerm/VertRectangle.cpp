#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include "VertRectangle.h"

using namespace std;

VertRectangle::VertRectangle()
{
	height = 1;
	width = 1;
}

VertRectangle::VertRectangle(double h, double w)
{
	height = h;
	width = w;
}

double VertRectangle::GetArea()
{
	area = height * width;
	return area;
}

double VertRectangle::GetPerimeter()
{
	perimeter = 2 * (height * width);
	return perimeter;
}

void VertRectangle::Display()
{
	ofstream output;
	output.open("Z:\\ACSV13-mid1\\SteveMulholland\\output.txt", ios::app);

	for (size_t i = 0; i < height; i++)
	{
		if (i == 0)
		{
			for (size_t w = 0; w < width; w++)
			{
				output << "* ";
			}

			output << endl;
		}
		else if(i == height - 1)
		{
			for (size_t w = 0; w < width; w++)
			{
				output << "* ";
			}

			output << endl;
		}
		else
		{
			for (size_t w = 0; w < width; w++)
			{
				if (w == 0)
				{
					output << "*";
				}
				else if (w == width - 1)
				{
					output << " *";
				}
				else
				{
					output << "  ";
				}
			}

			output << endl;
		}
	}
	
	output.close();
}


VertRectangle::~VertRectangle()
{
}
