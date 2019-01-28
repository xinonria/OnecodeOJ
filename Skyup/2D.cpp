#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;
int main()
{
	char a[1001], b[1001], c[2002];

	scanf("%s%s%s", a, b, c);

	if (strlen(c) != strlen(a) + strlen(b))
	{
		cout << "No";
		return 0;
	}

	int a_xb = 0, b_xb = 0, c_xb = 0;
	int a_together = 0, b_together = 0;
	while (c_xb != strlen(c))
	{
		if (a[a_xb] == c[c_xb] && b[b_xb] == c[c_xb])
		{
			if (!a_together)
			{
				a_together = a_xb;
				b_together = b_xb;
			}
			++a_xb, ++b_xb, ++c_xb;
		}
		else if (a[a_xb] == c[c_xb])
		{
			if (a_together)
			{
				b_xb = b_together;
				b_together = 0;
				a_together = 0;
			}
			++a_xb;
			++c_xb;
		}
		else if (b[b_xb] == c[c_xb])
		{
			if (a_together)
			{
				a_xb = a_together;
				b_together = 0;
				a_together = 0;
			}
			++b_xb;
			++c_xb;
		}
		else
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}