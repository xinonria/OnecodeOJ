#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > 90 || b > 90 || c > 90)
	{
		cout << "obtuse triangle";
		return 0;
	}
	else if (a == 90 || b == 90 || c == 90)
		{
			cout << "right triangle";
			return 0;
		}
	else
	{
		cout << "acute triangle";
		return 0;
	}
}