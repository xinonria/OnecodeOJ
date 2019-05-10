#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
	int ask_number;
	cin >> ask_number;
	int now_h, now_m;
	char temp_input;
	int add_h, add_m;
	int n, x = 0;
	char pointt;
	while (ask_number--)
	{
		cin >> now_h >> now_m;
		for (int i = 1; i <= 5; ++i) temp_input = getchar();
		cin >> n;
		if (pointt = getchar() == '.') cin >> x;
		if (temp_input == '-') 
		{
			n = -n;
			x = -x;
		}
		n -= 8;
		add_h = n;
		add_m = x*6;
		now_h += add_h;
		now_m += add_m;
		if (now_m < 0) 
		{
			now_m = 60 + now_m;
			--now_h;
		}
		if (now_m > 59) 
		{
			now_m -= 60;
			++now_h;
		}
		if (now_h < 0) now_h = 24 + now_h;
		if (now_h > 23) now_h -= 24;
		cout << setw(2) << setfill('0') << now_h << ":" << setw(2) << setfill('0') << now_m << '\n';
	}
	return 0;
}
