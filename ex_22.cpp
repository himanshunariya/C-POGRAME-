#include<iostream>
using namespace std;
int main()
{
	int a=1,b;
	cout << "Enter b = ";
	cin >> b;
	while(a<=b)
	{
		if(a%2==0)
		{
			cout << a*a << "\t";
		}
		else
		{
			cout << a << "\t";
		}
		a++;
	}
}
/*
Enter b = 10
1 4 3 16 5 36 7 64 9 100
*/