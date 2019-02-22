#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int a[1010];

int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	int temp = 1;
	for (int i = 1; i <= sqrt(n); ++i)
	{
		if (n%i == 0)
		{
			a[temp++] = i;
			a[temp++] = n / i;
			cnt += 2;
		}
	}
	sort(a + 1, a + 1 + cnt);
	for (int i = 1; i <= cnt; ++i)
	{
		if (a[i] != a[i - 1]) //数组去重
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}