#include<iostream>
using namespace std;
int main()
{
	int a=1,b,n,sum=0;
	cout << "Enter n = ";
	cin >> n;
	while(a<n)
	{
		if(n%a==0)
		{
			cout << a << "\t";
			sum=sum+a;
		}
		a++;
	}
	cout << "\n sum = " << sum;
}
/*
Enter n = 50
1       2       5       10      25
 sum = 43
 */