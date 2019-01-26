#include<iostream>

using namespace std;

int a[100010], b[100010];

bool pd()
{
	if (a[0] > b[0]) return false;
	if (a[0] < b[0]) return true;
	for (int i = a[0]; i >= 1; ++i)
	{
		if (a[i] > b[i]) return false;
		if (a[i] < b[i]) return true;
	}
}

void su_b()
{
	if (pd())
	{
		cout << "-";
		for (int i = 0; i <= a[0]; ++i)
		{
			swap(a[i], b[i]);
		}
	}
	for (int i = 1; i <= a[0]; ++i)
	{
		if (a[i] < b[i])
		{
			a[i] += 10;
			--a[i + 1];
		}
		a[i] -= b[i];
	}
	int len = a[0];
	while (!a[len]) --len;
	a[0] = len;
}

int main()
{
	string x, y;
	cin >> x >> y;
	a[0] = x.length();
	b[0] = y.length();
	if (x == y)
	{
		cout << "0";
		return 0;
	}
	for (int i = 1; i <= a[0]; ++i)
	{
		a[i] = x[a[0] - i] - '0';
	}
	for (int i = 1; i <= b[0]; ++i)
	{
		b[i] = y[b[0] - i] - '0';
	}
	su_b();
	for (int i = a[0]; i >= 1; --i)
	{
		cout << a[i];
	}
	cout << endl;
	return 0;
}
