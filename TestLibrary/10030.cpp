#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int maxx=n>m? n:m;
	for(int i=1;i<=maxx;++i)
	{
		if(n%i==0 && m%i==0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
