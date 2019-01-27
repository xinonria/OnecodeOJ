#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

struct People {
	string name;
	int Chinese;
	int Math;
	int English;
	int total;
} a[1010];

bool cmp(People a, People b)
{
	if (a.total != b.total)
	{
		return a.total > b.total;
	}
	else
	{
		if (a.Chinese != b.Chinese)
		{
			return a.Chinese > b.Chinese;
		}
		else
		{
			if (a.Math != b.Math)
			{
				return a.Math > b.Math;
			}
			else return a.name < b.name;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i].name >> a[i].Chinese >> a[i].Math >> a[i].English;
		a[i].total = a[i].Chinese + a[i].Math + a[i].English;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; ++i)
	{
		cout << a[i].name  << " " << a[i].Chinese << " " << a[i].Math << " " << a[i].English;
		cout << '\n';
	}
	return 0;
}