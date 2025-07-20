#include <iostream>
using namespace std;
int long time_to_sec(long m)
{
	int p=1 ;
	p= 60 * m;
	return p;
}
int long secs_to_time(long n)
{
	int q=1 ;
	q= n/ 60;
	return q;
}
int main()
{
	int o, p;
	cout << "Enter minutes=";
	cin >> o;
	cout << "Enter seconds=";
	cin >> p;
	cout << "Minutes in seconds is " << time_to_sec(o) << endl;
	cout << "Second in minutes is " << secs_to_time(p);
	return 0;
}