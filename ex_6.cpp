#include<iostream>
using namespace std;
int main()
{
	int i,j,b,a[10],count=1,len;
	for(i=0;i<10;i++)
	{
		cout << "enter a["<< i << "] = ";
		cin >> a[i];
	}
	
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
		cout << a[i] <<"\t";
	}
	for(i=0;i<10;i++)
	{
		if(a[i]==a[i+1])
		{
			count+=1;
			cout << a[i] <<" is "<< count <<" times \n";
		}
		else
		{
			count=1;
			// printf("\n %d is %d times \n",a[i],count);
		}
	}
	cout << a[i] << "is " << count << " times \n";
}