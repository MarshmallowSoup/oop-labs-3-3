#include "ClosedBitString.h"
ClosedBitString ClosedBitString::operator++()
{
	a++;
	return *this;
}

ClosedBitString ClosedBitString::operator--()
{
	a--;
	return *this;
}

ClosedBitString ClosedBitString::operator++(int)
{
	ClosedBitString obj(*this);
	b++;
	return *this;
}

ClosedBitString ClosedBitString::operator--(int)
{
	ClosedBitString obj(*this);
	b--;
	return *this;
}

ClosedBitString& ClosedBitString::operator=(const ClosedBitString& obj)
{
	setA(obj.getA());
	setB(obj.getB());
	return *this;
}

ClosedBitString::operator string() const
{

	stringstream sout;
	sout << "a = " << a << endl << " b = " << b << endl;
	return sout.str();
}


ostream& operator<<(ostream& out, ClosedBitString& obj)
{
	out << string(obj);
	return out;
}

istream& operator>>(istream& in, ClosedBitString& obj)
{
	cout << " a = "; in >> obj.a;
	cout << " b = "; in >> obj.b;
	cout << endl;
	return in;
}

ClosedBitString operator ! (ClosedBitString obj)
{
	ClosedBitString res;
	res.a = ~obj.a;
	res.b = ~obj.b;
	return res;
}

ClosedBitString operator | (ClosedBitString obj1, ClosedBitString obj2)
{
	ClosedBitString res;
	res.a = obj1.a | obj2.a;
	res.b = obj1.b | obj2.b;
	return res;
}
ClosedBitString operator & (ClosedBitString obj1, ClosedBitString obj2)
{
	ClosedBitString res;
	res.a = obj1.a & obj2.a;
	res.b = obj1.b & obj2.b;
	return res;
}