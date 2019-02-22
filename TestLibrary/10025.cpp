#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	switch (b)
	{
	case 1:
		a += 20;
		break;
	case 2:
		a += 10;
		break;
	case 3:
		a += 5;
		break;
	case 0:
		break;
	default:
		break;
	}
	//尝试直接一句话数组解决输出,因为题目限制导致有漏洞,啊重复而枯燥的工程对人体是有害的 cout<<grades[(a-50)/10];
	if (a <= 59)
	{
		cout << "E";
		return 0;
	}
	if (a <= 70)
	{
		cout << "D";
		return 0;
	}
	if (a <= 80)
	{
		cout << "C";
		return 0;
	}
	if (a <= 90)
	{
		cout << "B";
		return 0;
	}
	if (a >= 91)
	{
		cout << "A";
		return 0;
	}
}