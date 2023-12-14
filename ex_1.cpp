#include<iostream>
using namespace std;
int main()
{
	int i,k,j;
	cout<<"Print A to Z\n\n";
	for(i=65;i<=90;i++)
	{
		cout<<char(i)<<"\t";
	}
	cout<<"\n\n Print A-65 to Z-90\n\n";
	for(k=65;k<=90;k++)
	{
		cout<<char(k)<<"-"<<k<<"\t";
	}
	cout <<"\n\n Print A-a to Z-z\n";
	for(j=65;j<=90;j++)
	{
		cout<<char(j)<<"-"<<char(j+32)<<"\t";
	}
	return 0;
}