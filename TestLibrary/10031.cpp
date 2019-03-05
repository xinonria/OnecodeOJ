#include<iostream>

using namespace std;

int a[101];

int main()
{
	int n;
	cin >> n;
	a[1]=1;
	a[2]=2;
	for(int i=3;i<=n;++i)
	{
		a[i]=2*a[i-1] - a[i-2] + 1;
	}
	for(int i=1;i<=n;++i)
	{
		cout<< a[i] << " ";
	}
	return 0;
}
