#pragma once
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

class BaseBitString
{

protected:
	long a;
	long b;
public:
	long getA() const { return a; };
	long getB() const { return b; };
	void setA(long value) { a = value; }
	void setB(long value) { b = value; }

	operator string() const;
	BaseBitString& operator = (const BaseBitString& obj);
	BaseBitString();
	BaseBitString(long first, long second);
	BaseBitString(BaseBitString& obj);


	friend ostream& operator << (ostream& out, BaseBitString& obj);
	friend istream& operator >> (istream& in, BaseBitString& obj);

};

