#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b + c == 180)
	{
		cout << "yes";
		return 0;
	}
	else
	{
		cout << "no";
		return 0;
	}
}