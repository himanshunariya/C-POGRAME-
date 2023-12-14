#include<iostream>
using namespace std;
int main()
{
	int a[20],zero[20],one[20],i,nz=0,no=0;
	for(i=0;i<=20;i++)
	{
		cout << "enter a["<< i << "] = ";
		cin >> a[i];
	}
	cout << "zero = ";
	for(i=0;i<=20;i++)
	{
		if(a[i]==0)
		{
			nz+=1;
			zero[i]=a[i];
			cout << zero[i] << "\t";
		}else
		{
			zero[i] = 9;
		}
	}
	cout << "\n";
	cout << "one =  ";
	for(i=0;i<20;i++)
	{
		if(a[i]==1)
		{
			no+=1;
			one[i]=a[i];
			cout << one[i] << "\t";
		}
		else{
			one[i]=9;
		}
	}
	cout << "\n total number of 0 in array = " << nz;
	cout << "\n total number of 1 in array = " << no;
	
}