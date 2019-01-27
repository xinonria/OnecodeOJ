#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

struct People {
	string name;
	int Math;
} a[1010];

void BubbleSort(int n)
{
	bool flag = true;
	for (int i = 1; i <= n && flag; i++) {
		flag = false;
		for (int j = 1; j <= n - i + 1; j++) {
			if (a[j].Math < a[j + 1].Math) {
				People temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = true;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i].name >> a[i].Math;
	}
	BubbleSort(n);
	string temp_name;
	int temp_math;
	bool ok = true;
	for (int i = 1; i <= n; ++i)
	{
		cin >> temp_name >> temp_math;
		if ((temp_name != a[i].name) || (temp_math != a[i].Math))
		{
			ok = false;
		}
	}
	if(ok) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}