#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include "HorRectangle.h"

using namespace std;

HorRectangle::HorRectangle()
{
	height = 1;
	width = 1;
}

HorRectangle::HorRectangle(double h, double w)
{
	height = h;
	width = w;
}

double HorRectangle::GetArea()
{
	area = height * width;
	return area;
}

double HorRectangle::GetPerimeter()
{
	perimeter = 2 * (height * width);
	return perimeter;
}

void HorRectangle::Display()
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
		else if (i == height - 1)
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


HorRectangle::~HorRectangle()
{
}
