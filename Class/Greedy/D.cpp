#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <list>
using namespace std;
int main()
{
	list<char> l_coin;
	char Insert;
	int k = 0;
	while (Insert = getchar())
	{
		if (Insert == '\n')
			break;
		l_coin.push_back(Insert);
		++k;
	}
	list<char>::iterator iter;
	int Step = 0;
	bool bl = 0;
	int w = 0;
	for (iter = l_coin.begin(); iter != l_coin.end(); ++iter, ++w)
	{
		Insert = getchar();
		if (w+1 == k)
		{
			if (Insert != *iter)
			{
				if (bl)
				{
					cout << Step;
					return 0;
				}
				cout << "NO";
				return 0;
			}
			else
			{
				if (bl)
				{
					cout << "NO";
					return 0;
				}
				cout << Step;
				return 0;
			}
		}
		if (Insert != *iter)
		{
			if (!bl) {
				++Step;
				bl = 1;
			}
			else
			{
				bl = 0;
			}
		}
		else
		{
			if (bl)
			{
				++Step;
				bl = 1;
			}
		}
	}
	cout << "NO";
	return 0;
}