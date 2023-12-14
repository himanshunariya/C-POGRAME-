#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,n,sum=0;
	cout << "Enter n = ";
	cin >> n;
	while(a<=n)
	{
		cout << b;
		if(a<n)
		{
			cout << "+";
		}
		sum=sum+b;
		b=(b*10)+1;
		a++;
	}
	cout << "\n sum =" << sum;
}
/*
1+11+111+1111+11111
 sum =12345
 */