#include<iostream>
using namespace std;
int isperfect(int num)
{
    int i,sum=0;
    for(i=1;i<=num/2;i++)
	{
        if(num%i==0)
		{
            sum+=i;
        }
    }
    if(sum==num && num>0)
	{
        return 1;
    }
	else
	{
        return 0;
    }
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isperfect(num))
	{
        cout << num << " is a perfect number.";
    }
	else
	{
        cout << num << " is not a perfect number.";
    }
}
