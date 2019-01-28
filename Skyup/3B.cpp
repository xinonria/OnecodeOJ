#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for (int w = 1; w <= n; ++w)
	{
		unsigned long long k;
		scanf("%lld", &k);
		int cnt = 0;
		while (k != 0 && ++cnt)
		{
			k >>= 1;
		}
		printf("%d\n", cnt);
	}
	system("pause");
	return 0;
}