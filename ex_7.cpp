#include<iostream>
using namespace std;
int main()
{
	int a[50][50],c[50][50],sum[50][50],i,j,b,n,m;
	cout << "Enter no of rows =";
	cin >> n;
	cout << "Enter no of colums =";
	cin >> m;
	for(b=1;b<=2;b++)
	{
		cout << "\n" << b << " materics \n";
		if(b==1)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					cout << "Enter value = ";
					cin >> a[i][j];
				}
			}
		}
		else
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					cout << "Enter value = ";
					cin >> c[i][j];
				}
			}
		}
	}
	for(b=1;b<=2;b++)
	{
		cout << "\n "<< b << " materics \n";
		if(b==1)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					cout << a[i][j];
				}
				cout << "\n";
			}
		}
		else
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					cout << c[i][j] << "\t";
				}
				cout << "\n";
			}
		}
	}
	cout << "addition of materics \n ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i][j]=a[i][j]+c[i][j];
			cout << sum[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "subtraction of materics \n ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i][j]=a[i][j]-c[i][j];
			cout << sum[i][j] << "\t";
		}
		cout << "\n";
	}
}