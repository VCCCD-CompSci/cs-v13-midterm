// MidTerm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include "HorRectangle.h"
#include "VertRectangle.h"
#include "MidTerm.h"

using namespace std;

int main()
{
	double vHeight;
	double vWidth;
	double hHeight;
	double hWidth;
	ofstream output;	

	cout << "Enter the height for a vertical rectangle: " << endl;
	cin >> vHeight;
	cout << "Enter the width for a vertical rectangle: " << endl;
	cin >> vWidth;

	cout << "Enter the height for a horizontal rectangle: " << endl;
	cin >> hHeight;
	cout << "Enter the width for a horizontal rectangle: " << endl;
	cin >> hWidth;

	VertRectangle vRect(vHeight, vWidth);
	HorRectangle hRect(hHeight, hWidth);

	output.open("Z:\\ACSV13-mid1\\SteveMulholland\\output.txt");
	output << "The area of the vertical rectangle is: " << vRect.GetArea() << endl;
	output << "The perimeter of the vertical rectangle is: " << vRect.GetPerimeter() << endl;
	output << "The area of the horizontal rectangle is: " << hRect.GetArea() << endl;
	output << "The perimeter of the horizontal rectangle is: " << hRect.GetPerimeter() << endl;
	output << endl;
	output.close();

	vRect.Display();
	hRect.Display();

	output.open("Z:\\ACSV13-mid1\\SteveMulholland\\output.txt", ios::app);
	output << endl;
	output << "The total area is: " << vRect.area + hRect.area << endl;
	output << "The total perimeter is: " << vRect.perimeter + hRect.perimeter << endl;
	output << endl;
	output.close();

    return 0;
}

