#include<iostream>
using namespace std;
int main()
{
	int a,b,n,f=1;
	cout << "Enter b=";
	cin >> b;
	a=1;
	do
	{
		n=a*f;
		cout << n << "\t";
		f*=2;
		a++;
	}while(a<=b);
}
// 1 4 12 32 80 