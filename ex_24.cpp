#include<iostream>
using namespace std;
int main()
{
	int i=1,j;
	while(i<=10)
	{
		j=1;
		while(j<=5)
		{
			if(i%2==1)
			{
				cout << i << "\t";
			}
			j++;
		}
		if(i%2==0)
		{
			cout << "\n";
		}
		i++;
	}
}
/*
1       1       1       1       1
3       3       3       3       3
5       5       5       5       5
7       7       7       7       7
9       9       9       9       9
*/