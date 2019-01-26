#include<iostream>
#include <string>
#include<cstdio>
using namespace std;

int main()
{
	string n;
	cin >> n;
	double cnt = 0;
	for (int i = 0; i < n.length(); ++i)
	{
		switch (n[i])
		{
		case 'B':
			break;
		case 'L':
			cnt += 2.5;
			break;
		case 'A':
			cnt += 2.0;
			break;
		case 'C':
			cnt += 1.0;
			break;
		case 'H':
			cnt += 0.5;
			break;
		default:
			cnt += 0.1;
			break;
		}
	}
	printf("%0.1f", cnt);
	return 0;
}
