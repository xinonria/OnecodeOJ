#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if((a+b) & 1)
	{
		cout<<"odd"<<'\n';
		return 0;
	}
	else
	{
		cout<<"even"<<'\n';
		return 0;
	}
	return 0;
}

