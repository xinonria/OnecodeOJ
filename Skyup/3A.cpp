#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	char Str[1000000];
	scanf("%s", Str);
	int under_point = 0;
	for (int w = 1; w <= n; ++w)
	{
		for (int i = 1; i <= m; ++i)
		{
			printf("%c", Str[under_point++]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}