#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex a(1, 2);
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;

	Complex x, y;
	cin >> x >> y;
	cout << x * y << endl;
	cout << x + y << endl;;
	if (x == y)
		cout << "True\n" << endl;
	else
		cout << "False\n" << endl;

	return 0;
}