#include <iostream>
using namespace std;

int main()
{
	unsigned int a = 60; // 0011 1100
	unsigned int b = 13; // 0000 1101
	int c = 0;

	c = a & b;
	cout << "Line = Value of c is : " << c << endl;

	c = a | b;
	cout << "Line = Value of c is : " << c << endl;

	c = a ^ b;
	cout << "Line = Value of c is : " << c << endl;

	c = ~a;
	cout << "Line = Value of c is : " << c << endl;

	c = a << 2;
	cout << "Line = Value of c is : " << c << endl;

	c = a >> 2;
	cout << "Line = Value of c is : " << c << endl;

	return 0;
}
