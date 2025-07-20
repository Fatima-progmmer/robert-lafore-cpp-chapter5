#include <iostream>
using namespace std;
void swapping(int a, int b)
{
	cout << "Before swapping\n" << a << "\t" << b;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "\nAfter swapping \n" << a << "\t" << b;
}
int main()
{
	int t, o;
	cout << "Enter a 1st number=";
	cin >> t;
	cout << "Enter 2nd number =";
	cin >> o;
	swapping(t, o);
	return 0;
}