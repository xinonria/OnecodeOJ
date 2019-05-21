#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = n;
	int a;
	bool first = true;
	for (int i = 1; i <= t; ++i)
	{
		cin >> a;
		if (a == 0)
		{
			--n;
			continue;
		}
		if (first)
		{
			first = false;
		}
		else
		{
			first = false;
			if (a > 0) cout << "+";
		}
		if (abs(a) != 1) cout << a;
		else if (a == -1) cout << "-";
		if (n != 1) cout << "x^" << n--;
		else cout << "x";
	}
	cin >> a;
	if (a > 0) cout << "+";
	if (a != 0) cout << a;
	return 0;
}
