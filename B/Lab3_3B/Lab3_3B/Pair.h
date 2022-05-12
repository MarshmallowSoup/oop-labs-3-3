#pragma once
#include <string>
#include <sstream> 
#include<iostream>
using namespace std;
class Pair
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
		Pair& operator = (const Pair& obj);
		Pair();
		Pair(long first, long second);
		Pair(Pair& obj);
		
	friend ostream& operator << (ostream& out, Pair& obj);
	friend istream& operator >> (istream& in, Pair& obj);
	friend bool operator > (Pair& obj1, Pair& obj2);
	friend bool operator < (Pair& obj1, Pair& obj2);
	friend bool operator == (Pair& obj1, Pair& obj2);

};

