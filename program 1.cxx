#include <iostream>
using namespace std;
float circarea(int x)
{
	int area = 2 * 3.14 * x * x;
	return area;
}
int main()
{
	int radius;
	cout << "Enter a radius =";
	cin >> radius;
	cout << "Area of circle is " << circarea(radius);
	return 0;
}