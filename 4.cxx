#include <iostream>
using namespace std;
int distancevalue(int a, int b)
{
	int max = 1;
	if (a >= max)
		max = a;
	if (b >= max)
		max = b;
	return max;
}
int main()
{
	int x, y;
	cout << "Enter first number=";
	cin >> x;
	cout << "Enter second number=";
	cin >> y;
	cout << "Maxim value is  " << distancevalue(x, y);
	return 0;
}