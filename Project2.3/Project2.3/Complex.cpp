#include "Complex.h"

Complex::Complex()
{
	x = 0;
	y = 0;
}

Complex::Complex(double a = 0, double b = 0)
{
	x = a;
	y = b;
}

Complex::Complex(const Complex& c)
{
	x = c.x;
	y = c.y;
}

Complex::~Complex()
{ }

void Complex::SetX(double x)
{
	x = x;
}

void Complex::SetY(double y)
{
	y = y;
}

double Complex::GetX() const
{
	return x;
}

double Complex::GetY() const
{
	return y;
}

Complex& Complex::operator = (const Complex& c)
{
	x = c.x;
	y = c.y;
	return *this;
}

Complex::operator string () const
{
	stringstream ss;
	if (y >= 0)
		ss << x << "+" << y << "i\n";
	else
		ss << x << y << "i\n";
	return ss.str();
}

ostream& operator << (ostream& out, const Complex& c)
{
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Complex& c)
{
	cout << "Real: "; in >> c.x;
	cout << "Image: "; in >> c.y;
	cout << endl;
	return in;
}

Complex& Complex::operator ++()
{
	x++;
	return *this;
}

Complex& Complex::operator --()
{
	x--;
	return *this;
}

Complex Complex::operator ++(int)
{
	Complex t(*this);
	y++;
	return t;
}

Complex Complex::operator --(int)
{
	Complex t(*this);
	y--;
	return t;
}

Complex operator + (const Complex& a, const Complex& b)
{
	return Complex(a.x + b.x, a.y + b.y);
}

Complex operator * (const Complex& a, const Complex& b)
{
	return Complex(a.x * b.x - a.y * b.y,
		a.x * b.y + a.y * b.x);
}

bool operator == (const Complex& a, const Complex& b)
{
	return a.x == b.x && a.y == b.y;
}