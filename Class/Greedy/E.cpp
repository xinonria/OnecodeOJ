#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long long Maxn = 0;
	int SJX[4];
	cin >> SJX[1] >> SJX[2] >> SJX[3];
	int d;
	do
	{
		sort(SJX+1, SJX+4);
		int One=0, Two=0, Three = 0;
		if (SJX[2] + SJX[3] > SJX[1] && SJX[1] + SJX[3] > SJX[2])
		One = SJX[1] + SJX[2] > SJX[3] ? SJX[1] + SJX[2] + SJX[3] : 0;
		if (d + SJX[3] > SJX[2] && SJX[2] + SJX[3] > d)
			Two = d + SJX[2] > SJX[3] ? d + SJX[2] + SJX[3] : 0;
		if (d + SJX[1] > SJX[2] && d + SJX[2] > SJX[1])
		Three = SJX[1] + SJX[2] > d ? SJX[1] + SJX[2] + d : 0;
		if (Two > One && Two > Three)
		{
			SJX[1] = d;
		}
		if (Three > One && Three > Two)
		{
			SJX[3] = d;
		}
		if (Maxn < SJX[1] + SJX[2] + SJX[3] && SJX[1] + SJX[2] > SJX[3] && SJX[2] + SJX[3] > SJX[1] && SJX[1] + SJX[3] > SJX[2])
		{
			Maxn =  SJX[1] + SJX[2] + SJX[3];
		}
	} while(scanf("%d", &d) != EOF);
	cout << Maxn;
}
