#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,n;
	cin>>a>>n;
	int temp=a;
	int win=0;
	for(int i=1;i<=n;++i)
	{
		win+=temp;
		temp+=a*pow(10,i);
	}
	cout<<win<<'\n';
	return 0;
}
