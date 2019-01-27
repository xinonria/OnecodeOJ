#include<iostream>
#include<cstdio>
using namespace std;
int a[1000010];
int main()
{
	int n, temp_i;
	int maxx = -1;
	cin >> n;
	for (int i = 1; i <= n; ++i) 
	{
		scanf("%d", &temp_i);
		++a[temp_i];
		maxx = maxx > temp_i ? maxx : temp_i;
	}
	for (int i = 0; i <= maxx; ++i)
	{
		while(a[i])
		{
			--a[i];
			printf("%d ", i);
		}
	}
	return 0;
}