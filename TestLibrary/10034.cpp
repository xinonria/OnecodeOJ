#include<iostream>
#include<cmath>

using namespace std;

bool check(double x)
{
	return !(x - (int)x > 0);
}

bool one(int x)
{
	int total = 0;
	int cop = x;
	while (cop != 0)
	{
		total += cop % 10;
		cop /= 10;
	}
	return check(sqrt(total));
}

int main()
{
	int n, cnt = 0;
	cin >> n;
	bool defaultt = false;
	for(int i = 1; i <= n; ++i)
	{
		defaultt = one(i);
		if(defaultt) cnt += i;
		defaultt = false;
	}
	cout << cnt << '\n';
	return 0;
}
