#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

map<char, int> a;
string s;

void get_number()
{
	int l = s.length();
	for(int i = 0; i != l; ++i)
	{
		++a[s[i]];
	}
}

int main()
{
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	get_number();
	int tempj = 26;
	int xl = s.length();
	for(map<char, int>::iterator i = a.begin(); i != a.end(); ++i, --tempj)
	{
		a[i->first] = tempj; 
	}
	int cnt = 0;
	for(int i=0;i!=xl;++i)
	{
		cnt += a[s[i]];
	} 
	cout << cnt << '\n';
	return 0;
}
