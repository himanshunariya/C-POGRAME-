#include<iostream>
using namespace std;
int main()
{
	int a=1,b,c=1,d=0,e;
	cout << "Enter b=";
	cin >> b;
	while(a<=b)
	{
		e=c+d;
		cout << e << "\t";
		c=d;
		d=e;
		a++;
	}
}
/*
1 1 2 3 5 8 13 21 34 55
*/