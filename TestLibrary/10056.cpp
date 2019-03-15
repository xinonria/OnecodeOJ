#include<iostream>

using namespace std;

int findd(char x)
{
	if(x >= 'a' && x <= 'z')
	{
		return 'a' - x - 1;
	}
	if(x >= 'A' && x <= 'Z')
	{
		return x - 'A' + 1;
	}
}

int main()
{
	int T;
	cin >> T;
	char s;
	int num = 0;
	for (int i = 1; i <= T; ++i)
	{
		cin >> s >> num;
		cout << findd(s) + num << '\n';
	}
	return 0;
}

