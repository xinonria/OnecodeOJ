#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
	string name;
	string Wclass;
	string number;
};

int n;
Student a[101];
vector<Student> win;

void Nam_find(string x)
{
	for (int i = 1; i <= n; ++i)
	{
		if (a[i].name == x) win.push_back(a[i]);
	}
}

void Cla_find(string x)
{
	for (int i = 1; i <= n; ++i)
	{
		if (a[i].Wclass == x) win.push_back(a[i]);
	}
}

void Num_find(string x)
{
	for (int i = 1; i <= n; ++i)
	{
		if (a[i].number == x) win.push_back(a[i]);
	}
}

int main()
{
	
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i].name >> a[i].Wclass >> a[i].number;
	}
	
	string findd;
	cin >> findd;
	int flag = 0;
	
	if (findd.length() == 7) Num_find(findd);
	else if (findd[0] >= '0' && findd[0] <= '9') Cla_find(findd);
	else Nam_find(findd);
	
	bool first = true;
	for (vector<Student>::iterator it = win.begin(); it != win.end(); ++it)
	{
		if (first)
		{
			cout << it->name << " " << it->Wclass << " " << it->number;
			first = false;
		}
		else cout << '\n' << it->name << " " << it->Wclass << " " << it->number;
	}
}