#include<iostream>

using namespace std;

char grades[10] = { 'E','D','C','B','A','A','A','A','A','A' };

int main()
{
	//目前发现总分为60会出现错误
	int a, b;
	cin >> a >> b;
	switch (b)
	{
	case 1:
		cout << grades[(a + 20 - 51) / 10];
		break;
	case 2:
		cout << grades[(a + 10 - 51) / 10];
		break;
	case 3:
		cout << grades[(a + 5 - 51) / 10];
		break;
	case 0:
		cout << grades[(a + 0 - 51) / 10];
		break;
	default:
		break;
	}
	return 0;
}