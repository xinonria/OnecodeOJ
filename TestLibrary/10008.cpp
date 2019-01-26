#include<iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int x = a / 100;
	int y = a / 10 % 10;
	int z = a % 10;
	int b = x + y + z;
	if (a%b == 0) cout << a * 2;
	else cout << a;
	return 0;
}
