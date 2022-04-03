#pragma once
#include <iostream>
#include <string> 
#include <sstream>

using namespace std;

class Complex
{
	double x, y;

public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);
	~Complex();

	double GetX() const;
	double GetY() const;
	void SetX(double);
	void SetY(double);

	Complex& operator = (const Complex&);
	operator string() const;

	friend ostream& operator <<(ostream&, const Complex&);
	friend istream& operator >>(istream&, Complex&);

	Complex& operator ++();
	Complex& operator --();
	Complex operator ++(int);
	Complex operator --(int);

	friend Complex operator + (const Complex&, const Complex&);
	friend Complex operator * (const Complex&, const Complex&);
	friend bool operator == (const Complex&, const Complex&);
};