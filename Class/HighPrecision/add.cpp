#include<iostream>
#include<string>

using namespace std;

int a[100010], b[100010];

void jiafa()
{
	int maxx = a[0] > b[0] ? a[0] : b[0];
	for (int i = 1; i <= maxx; ++i)
	{
		a[i] = a[i] + b[i];
		if (a[i] > 9)
		{
			a[i] = a[i] - 10;
			a[i + 1] = a[i + 1] + 1;
		}
	}
	if (a[maxx + 1]) a[0] = maxx + 1;
	else a[0] = maxx;
}

void print()
{
	for (int i = a[0]; i >= 1; --i)
	{
		cout << a[i];
	}
	cout << endl;
}

int main()
{
	string x, y;
	cin >> x >> y;
	a[0] = x.length();
	b[0] = y.length();
	for (int i = 1; i <= a[0]; ++i)
	{
		a[i] = x[a[0] - i] - '0';
	}
	for (int i = 1; i <= b[0]; ++i)
	{
		b[i] = y[b[0] - i] - '0';
	}
	jiafa();
	print();
	return 0;
}
