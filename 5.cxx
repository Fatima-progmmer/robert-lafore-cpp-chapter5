#include <iostream>
using namespace std;
long hms_to_secs(int hours, int minutes, int second)
{
	long seconds = second + hours * 3600+minutes*60;
	return seconds;
}
int main()
{
	int hours, second, minutes;
	cout << "Enter hour =";
	cin >> hours;
	cout << "Enter minutes=";
	cin >> minutes;
	cout << "Enter second =";
	cin >> second;
	cout << "In seconds is " << hms_to_secs(hours, minutes, second); return 0;
}