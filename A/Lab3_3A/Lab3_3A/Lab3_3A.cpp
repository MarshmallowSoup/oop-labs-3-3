//////////////////////////////////////////////
// Lab3_3A.cpp
#include <iostream>
#include "BaseBitString.h"
#include "OpenBitString.h"
#include "ClosedBitString.h"
using namespace std;

int main()
{

	cout << "Open inheritance" << endl;
	OpenBitString b1, b2;
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

	OpenBitString NOT1, NOT2, OR, AND;

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

	cout << "Closed inheritance" << endl;
	ClosedBitString c1, c2;
	cout << "first object" << endl;
	cin >> c1;
	cout << "second object" << endl;
	cin >> c2;
	cout << endl;

	cout << "first object" << endl;
	cout << c1;
	cout << "second object" << endl;
	cout << c2;
	cout << endl;

	ClosedBitString CNOT1, CNOT2, COR, CAND;

	CNOT1 = (!c1);
	CNOT2 = (!c2);
	COR = (c1 | c2);
	CAND = (c1 & c2);
	cout << "!(first object)" << endl;
	cout << CNOT1;
	cout << "!(second object)" << endl;
	cout << CNOT2;
	cout << "first object | second object" << endl;
	cout << COR;
	cout << "first object & second object" << endl;
	cout << CAND;
}