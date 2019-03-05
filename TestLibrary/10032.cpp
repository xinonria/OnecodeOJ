#include<iostream>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int temp=n;
	for(int i=1;i<=m;++i)
	{
		cout<<n;
		n+=temp;
	}
	return 0;
}
