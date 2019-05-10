#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int a, b;
	while (t--)
	{
		cin >> a >> b;
		if (b*3 <= a) cout << "Yes" << '\n';
		else cout << "No" << '\n';
	}
	return 0;
}
