#include<iostream>
#include<cmath>

using namespace std;

int poww(int x)
{
	for (int i = 1; i <= sqrt(x); ++i)
	{
		if (i*i == x)
		{
			return x;
		}
	}
	return 0;
}

int main()
{
	int n;
	long long sum = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		sum += poww(i);
	}
	cout << sum;
	return 0;
}