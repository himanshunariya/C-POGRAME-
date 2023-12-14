#include<iostream>
using namespace std;
int main()
{
	int a=65;
	while(a<90)
	{
		cout << char(a) << "\t";
		a+=2;
		cout << char(a+32) << "\t";
		a+=2;
	}
}
/*
A c E g I k M o Q s U w Y 
*/