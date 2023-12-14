#include<iostream>
using namespace std;
int main()
{
	int a,b,c=5;
	a=0;
	do
	{
		b=0;
		do
		{
			if(b<=c-a)
			{
				cout << "  ";
			}
			else
			{
				cout << " *";
			}
			b++;
		}while(b<=5);
		b=0;
		do
		{
			printf(" *");
			b++;
		}while(b<=a);
		cout << "\n";
		a++;
	}while(a<=5);
	a=5;
	do
	{
		b=0;
		do
		{
			cout << "  ";
			b++;
		}while(b<=6-a);
		c=1;
		do
		{
			cout << " *";
			c++;
		}while(c<=2*a-1);
		cout << "\n";
		a--;
	}while(a>=1);
}