#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
	int month,day;
	cin>>month>>day;
	int date=month*100+day;
	if(date >= 223 && date <= 504)
	{
		cout<<"spring"<<'\n';
		return 0;
	}
	if(date >= 505 && date <= 806)
	{
		cout<<"summer"<<'\n';
		return 0;
	}
	if(date >= 807 && date <= 1106)
	{
		cout<<"autumn"<<'\n';
		return 0;
	}
	if(date >= 1107 || date <= 222)
	{
		cout<<"winter"<<'\n';
		return 0;
	}
	return 0;
}

