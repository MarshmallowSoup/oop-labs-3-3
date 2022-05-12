////////////////////////////////////////////////
//  Lab3_3B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BitString.h"
using namespace std;


int main()
{
	BitString b1, b2;
	cout << "first object" << endl;
	cin >> b1;
	cout << "second object" << endl;
	cin >> b2;
	cout << endl;

	cout << "first object" << endl;
	cout << b1;
	cout << "second object" << endl;
	cout << b2;
	cout << endl;

	BitString NOT1, NOT2, OR, AND;

	NOT1 = (!b1);
	NOT2 = (!b2);
	OR = (b1 | b2);
	AND = (b1 & b2);
	cout << "!(first object)" << endl;
	cout << NOT1;
	cout << "!(second object)" << endl;
	cout << NOT2;
	cout << "first object | second object" << endl;
	cout << OR;
	cout << "first object & second object" << endl;
	cout << AND;

}