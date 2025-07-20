#include <iostream>
using namespace std;
double raisetopower(int n, double p)
{
	int result = 1;
	for (int x = 1; x <= p; x++)
		result = result * n;
	return result;
}
int main()
{
	int n;
	double p;
	cout << "Enter a base=";
	cin >> n;
	cout << "Enter a exponent=";
	cin >> p;
	cout << "Answer is " << raisetopower(n, p);
	return 0;
}