#include<iostream>
int main()
{
	int a,b,n,no,rem,sum=0;
	std::cout<<"Enter n = ";
	std::cin>>n;
	no=n;
	for(a=1;n>0;a++)
	{
		n=n/10;
	}
	n=no;
	for(b=1;no>0;b++)
	{
		rem=no%10;
		sum=sum+(rem*rem*rem);
		rem=no/10;
	}
	if(sum==n)
	{
		std::cout<<n<<"is armstrong number";
	}
	else
	{
		std::cout<<n<<"is not a armstrong number";
	}
    return 0;
}