#include <iostream>
using namespace std;
double overlap(int n, double p)
{
	int result = 1;
	for (int x = 1; x <= p; x++)
		result = result * n;
	return result;
}
void overlap(int NUM)
{
	cout << "The number is " << NUM << endl;
}
void overlap(char x)
{
	cout << "The character is " << x << endl;
}
void overlap(int long x)
{
	cout << "The number is " << x << endl;
}
void overlap(float t)
{
	cout << "The decimal is " << t << endl;
}
int main()
{
	int n;
	double p;
	cout << "Enter a base=";
	cin >> n;
	cout << "Enter a exponent=";
	cin >> p;
	cout << "Answer is " << overlap(n, p) << endl;
	overlap(8);
	overlap(9/0);
	return 0;
}