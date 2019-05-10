#include <iostream>
#include <cstring>

using namespace std;

int N[1010], B[1010];

void read(int a[])
{
	string s;
	cin >> s;
	a[0] = s.length();
	for (int i = 1; i <= a[0]; ++i)
	{
		s[i] = s[a[0] - i] - '0';
	}
}

void add(int a[], int b[])
{
	int i = 1, x = 0;
	while ((i <= a[0]) || (i <= b[0]))
	{
		a[i] += b[i] + x;
		x = a[i]/10;
		a[i]%=10;
		++i;
	}
}



int main()
{
	int N, M;
	cin >> N >> M;
	int rM = M;
	int B;
	char sign;
	int temp_i = 0;
	while (M--)
	{
		cin >> sign >> B;
		if (sign == '+') N+=B;
		if (sign == '-') N-=B;
	}
	cout << N << '\n';
	return 0;
}
