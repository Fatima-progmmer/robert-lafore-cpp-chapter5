#include <iostream>
using namespace std;
int fsum(int a, int b)
{
	int c;
	c = a + b;
	return c;
}
int fsub(int a,int b)
{
	int x;
	x = a - b;
	return x;
}
int fmul(int a, int b)
{
	int c;
	c = a * b;
	return c;
}
float fdiv(int a, int b)
{
	int c;
	c = a / b;
	return c;
}
int main()
{
	int x, y;
	cout << "Enter first number =";
	cin >> x;
	cout << "Enter second number=";
	cin >> y;
	cout << "Addition is " << fsum(x, y) << endl;
	cout << "Substraction is " << fsub(x, y) << endl;
	cout << "Multiplication is " << fmul(x, y) << endl;
	cout << "Division is " << fdiv(x, y) << endl;
	return 0;
}