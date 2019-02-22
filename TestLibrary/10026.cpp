#include<iostream>

using namespace std;

int main()
{
	int W;
	cin >> W;
	if (W <= 54)
	{
		cout << 1;
		return 0;
	}
	if (W <= 59)
	{
		cout << 2;
		return 0;
	}
	if (W <= 64)
	{
		cout << 3;
		return 0;
	}
	if (W <= 76)
	{
		cout << 4;
		return 0;
	}
	if (W <= 83)
	{
		cout << 5;
		return 0;
	}
	if (W <= 91)
	{
		cout << 6;
		return 0;
	}
	cout << 7;
	return 0;
}