#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main()
{
	int w;
	cin >> w;
	int n;
	for (int i = 1; i <= w; ++i)
	{
		cin >> n;
		while (n != 0)
		{
			s.push(n%7);
			n/=7;
		}
		while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}
		cout << " ";
	}
	return 0;
}

