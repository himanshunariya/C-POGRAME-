#include<iostream>
using namespace std;
int main()
{
	int a,b,c=65,d;
	d=c+32;
	a=1;
	do
	{
		b=1;
		do
		{
			if(a%2==0)
			{
				cout << char(c++);
				d++;
			}
			else
			{
				cout << char(d++);
				c++;
				
			}
			b++;
		}while(b<=a);
		a++;
		cout << "\n";
	}while(a<=5);
	
}
/*
a
BC
def
GHIJ
klmno
*/