#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int tempa, tempb;
	if (a == 90 || b == 90 || c == 90)      //含有90度三角形
	{
		if (a == 90)
		{
			if (b == c)      //判断是否直角等腰三角形
			{
				cout << "isosceles right triangle";
				return 0;
			}
			else            //普通直角
			{
				cout << "right triangle";
				return 0;
			}
		}
		if (b == 90)
		{
			if (a == c)      //判断是否直角等腰三角形
			{
				cout << "isosceles right triangle";
				return 0;
			}
			else            //普通直角
			{
				cout << "right triangle";
				return 0;
			}
		}
		if (c == 90)
		{
			if (a == b)      //判断是否直角等腰三角形
			{
				cout << "isosceles right triangle";
				return 0;
			}
			else            //普通直角
			{
				cout << "right triangle";
				return 0;
			}
		}
	}
	if (a == 60 && b == 60 && c == 60)
	{
		cout << "equilateral triangle";
		return 0;
	}
	if (true)          //判断是否等腰三角形,该判断语句纯属只为更好分段
	{
		if (a == b)
		{
			cout << "isosceles triangle";
			return 0;
		}
		if (c == b)
		{
			cout << "isosceles triangle";
			return 0;
		}
		if (a == c)
		{
			cout << "isosceles triangle";
			return 0;
		}
	}
	if (a > 90 || b > 90 || c > 90)   //钝角三角形
	{
		cout << "obtuse triangle";
		return 0;
	}
	cout << "acute triangle";
	return 0;
}