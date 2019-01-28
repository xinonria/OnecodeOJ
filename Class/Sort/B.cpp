#include<iostream>
#include<algorithm>

using namespace std;

int a[1010];

void SelectSort(int n)
{
	int m;
	for (int i = 1; i <= n - 1; i++)
	{
		m = i;
		for (int j = i + 1; j <= n; j++)
		{
			if (a[j] > a[m])
				m = j;
		}
		if (m != i)
		{
			swap(a[i], a[m]);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	SelectSort(n);
	for (int i = 1; i <= n; ++i) cout << a[i] << " ";
	return 0;
}