#include<iostream>
#include<algorithm>

using namespace std;

int a[1010];

void BubbleSort(int n)
{
	bool flag = true;
	for (int i = 1; i <= n && flag; i++) 
	{
		flag = false;
		for (int j = 1; j <= n - i; j++) 
		{
			if (a[j] > a[j + 1]) 
			{
				swap(a[j], a[j + 1]);
				flag = true;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	BubbleSort(n);
	for (int i = 1; i <= n; ++i) cout << a[i] << " ";
	return 0;
}