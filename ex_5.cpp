#include<iostream>
using namespace std;
int main()
{
	int a,b,c,temp,n;
	cout << "Enter n=";
	cin >> n;
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=n-a;b++)
		{
			cout << " ";
		}
		temp=1;
		for(c=1;c<=a;c++)
		{
			cout <<" "<<temp;
			temp=temp*(a-c)/c;
		}
		cout << "\n";
	}
}
/*
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1
 */