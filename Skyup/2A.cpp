#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>

using namespace std;

bool h[1000001],l[1000001];

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int temp_h,temp_l;
	for(int i=1;i<=k;++i)
	{
		scanf("%d%d",&temp_h,&temp_l);
		h[temp_h]=true;
		l[temp_l]=true;
	}
	int cnt_h=0,cnt_l=0;
	for(int i=1;i<=n;++i)
	{
		if(!h[i]) ++cnt_h;
	}
	for(int i=1;i<=m;++i)
	{
		if(!l[i]) ++cnt_l;
	}
	cout<<cnt_h<<" "<<cnt_l;
	return 0;
}

