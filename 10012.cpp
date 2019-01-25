#include<iostream>

using namespace std;

int main()
{
	if((!(1<4))&&(!(3>9))||(1>4)&&(3>9)) cout<<"1"<<'\n';
	else cout<<"0"<<'\n';
	if((!(1<4))||(!(3>9))&&(1<4)||(3>9)) cout<<"1"<<'\n';
	else cout<<"0"<<'\n';
	return 0;
}
