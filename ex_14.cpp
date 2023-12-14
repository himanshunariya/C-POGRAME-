#include<iostream>
using namespace std;
int main()
{
	int a,b,k=1;
	a=1;
	do
	{
		b=1;
		do
		{
			cout << k;
			if(k==1)
			{
				k=0;
			}
			else
			{
				k=1;
			}
			b++;
		}while(b<=a);
		cout << "\n";
		a++;
	}while(a<=5);
}
/*
1
01
010
1010
10101
*/