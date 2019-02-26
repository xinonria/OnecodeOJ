#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	unsigned long long cnt = 0;
	int n, m;
	cin >> n >> m;
	for (int w = 1; w <= n; ++w)
	{
		int Need = m - w;
		if (Need < w+1)
		{
			cnt += n - w;
		}
		else
		{
			if (w + n - m < 0)
			{
				continue;
			}
			cnt += (w + n - m);
		}
	}
	cout << cnt;
	return 0;
}