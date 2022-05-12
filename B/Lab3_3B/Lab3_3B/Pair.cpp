
///////////////////////////////////////////////////////////////////////////
// Pair.cpp
#include "Pair.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

Pair::operator string() const
{

	stringstream sout;
	sout << "a = " << a << endl << " b = " << b << endl;
	return sout.str();
}

Pair& Pair::operator=(const Pair& obj)
{
	a = obj.a;
	b = obj.b;
	return *this;
}

Pair::Pair() {
	a = 0l;
	b = 0l;
}
Pair::Pair(long first, long second) {
	a = first;
	b = second;
}
Pair::Pair(Pair& obj) {
	*this = obj;
}


istream& operator>>(istream& in, Pair& obj)
{
	cout << " a = "; in >> obj.a;
	cout << " b = "; in >> obj.b;
	cout << endl;
	return in;
}
bool operator>(Pair& obj1, Pair& obj2)
{
	return obj1.a > obj2.a && obj1.b > obj2.b;
}

bool operator<(Pair& obj1, Pair& obj2)
{
	return !(obj1 > obj2);
}

bool operator==(Pair& obj1, Pair& obj2)
{
	return obj1.a == obj2.a && obj1.b == obj2.b;
}

ostream& operator << (ostream& out, Pair& obj)
{
	out << string(obj);
	return out;
}
