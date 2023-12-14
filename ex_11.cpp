#include<iostream>
using namespace std;
int main()
{
	int a,b,c=1;
	a=1;
	do
	{
		b=1;
		do
		{
			cout << c++;
			b++;
		}while(b<=a);
		a++;
		cout << "\n";
	}while(a<=5);
	
}
/*
1
23
456
78910
1112131415
*/