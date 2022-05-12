
///////////////////////////////////////////////////////////////////////////
// BitString.cpp
#include "BitString.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

BitString::operator string() const
{

	stringstream sout;
	sout << "a = " << a << endl << " b = " << b << endl;
	return sout.str();
}

BitString& BitString::operator=(const BitString& obj)
{
	a = obj.a;
	b = obj.b;
	return *this;
}

BitString::BitString() {
	a = 0l;
	b = 0l;
}
BitString::BitString(long first, long second) {
	a = first;
	b = second;
}
BitString::BitString(BitString& obj) {
	*this = obj;
}

BitString BitString::operator++()
{
	a++;
	return *this;
}

BitString BitString::operator--()
{
	a--;
	return *this;
}

BitString BitString::operator++(int)
{
	BitString obj(*this);
	b++;
	return *this;
}

BitString BitString::operator--(int)
{
	BitString obj(*this);
	b--;
	return *this;
}


BitString operator ! (BitString obj)
{
	BitString res;
	res.a = ~obj.a;
	res.b = ~obj.b;
	return res;
}

BitString operator | (BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a | obj2.a;
	res.b = obj1.b | obj2.b;
	return res;
}
BitString operator & (BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a & obj2.a;
	res.b = obj1.b & obj2.b;
	return res;
}

istream& operator>>(istream& in, BitString& obj)
{
	cout << " a = "; in >> obj.a;
	cout << " b = "; in >> obj.b;
	cout << endl;
	return in;
}
ostream& operator << (ostream& out, BitString& obj)
{
	out << string(obj);
	return out;
}
