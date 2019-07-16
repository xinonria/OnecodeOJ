#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int intt[51], floatt[51];

void addd()
{
	if (floatt[3] > 4)
	{
		++floatt[2];
	}
} 

int main()
{
	long long t;
	cin >> t;
	char temp;
	temp = getchar();
	for (int i = 1; i <= t; ++i)
	{
		memset(intt,0,sizeof(intt));
		memset(floatt,0,sizeof(floatt));
		bool flag = true;
		while (temp = getchar())
		{
			///////////////////////////////////
			int tempi = 0;
			if(temp == '\n')
			{
				floatt[0] = tempi;
			}
			if(temp == '-')
			{
				cout << "-";
				continue;
			}
			if(temp == '.') 
			{
				intt[0] = tempi;
				tempi = 0;
				flag = false;
			}
			if(flag) intt[++tempi] = temp - '0';
			else floatt[++tempi] = temp - '0';
		}
		////////////////////////////////////////
		addd();
		for(int i=1;i<=intt[0];++i) cout<<intt[i];
		cout<<".";
		for(int i=1;i<=2;++i) cout<<floatt[i];
	}
	return 0;
}