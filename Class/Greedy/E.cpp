#include<iostream>
#include<algorithm>
using namespace std;
int a[100001],n,ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=n-2;i>=1;i--)
	{
		if((a[i]+a[i+1])>a[i+2]){
			ans=a[i]+a[i+1]+a[i+2];
			break;
		}
	}
	cout<<ans;
}
