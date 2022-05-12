///////////////////////////////////////////////////////////////
// Lab3_3F.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
#include <string>


using namespace std;

int main()
{
	Triangle ABC;
	cin >> ABC;
	cout << ABC;

	cout << "AB(P1P2) = " << ABC.get_a() << endl;
	cout << "BC(P2P3) = " << ABC.get_b() << endl;
	cout << "AC(P1P3) = " << ABC.get_c() << endl;
	cout << endl;

	cout << "Type of ABC = " << ABC.triangleType() << endl;
	cout << "Perimeter ABC = " << ABC.perimeter() << endl;
	cout << "Square ABC = " << ABC.square() << endl;

	cout << "total objects = " << ABC.get_count() << endl;
}
