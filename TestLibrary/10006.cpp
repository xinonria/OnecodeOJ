#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int cnt = 0;
	for (int i = 1; i <= 100; ++i)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) ++cnt;
	}
	cout << cnt;
	return 0;
}