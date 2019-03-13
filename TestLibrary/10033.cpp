#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	double h;
	cin>>h;
	double now=h;
	double win=now;
	now/=2;
	for(int i=1;i<=7;++i)
	{
		win+=now*2;
		now/=2.0;
	}
	printf("%0.4f",win);
	return 0;
}
