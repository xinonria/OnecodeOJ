#include <iostream>
#include <algorithm>

using namespace std;

int a[110], s1[110], s2[110];

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	int s1i = 0, s2i = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] & 1) s1[++s1i] = a[i];
		else s2[++s2i] = a[i]; 
	}
	sort(s1+1,s1+1+s1i,cmp);
	sort(s2+1,s2+1+s2i);
	int first1 = true, first2 = true;
	if (!s1i) cout << 0;
	else for (int i = 1; i <= s1i; ++i)
		{
			if (first1)
			{
				cout << s1[i];
				first1 = false;
			}
			else cout << " " << s1[i];
		}
	cout << '\n';
	if (!s2i) cout << 0;
	else for (int i = 1; i <= s2i; ++i)
		{
				if (first2)
				{
					cout << s2[i];	
					first2 = false;
				}
				else cout << " " << s2[i];
		}
	return 0;
}

