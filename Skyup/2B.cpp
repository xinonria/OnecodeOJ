#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

struct Test {
	string test;
	int money;
	int c;
}a[10010];

int n;

void i_nit()
{
	for(int i=1;i<=n;++i)
	{
		a[i].c=0;
	}
}

bool cmp(Test x,Test y)
{
	return x.money > y.money;
}

void fz(string x)
{
	for(int i=1;i<=n;++i)
	{
		if(a[i].test == x) ++a[i].c;
	}
}

int main()
{
	cin>>n;
	i_nit();
	for(int i=1;i<=n;++i)
	{
		cin>>a[i].test>>a[i].money;
	}
	sort(a+1,a+n+1,cmp);
	int sum=0;
	int test_cnt=1;
	for(int i=1;i<=n;++i)
	{
		if(a[i].money <= 0) break;
		if(a[i].c != 3)
		{
			sum+=a[i].money;
			fz(a[i].test);
		}
	}
	cout<<sum<<endl;
	return 0;
}

