#include<iostream>
using namespace std;
int main()
{
	int a,n,ans=1;
	cout << "Enter n = ";
	cin >> n;
	for(a=1;a<=n;a++)
	{
		cout << a <<" * ";
		ans*=a;
	}
	cout << "\n Ans = " << ans;
    return 0;
}
/*
1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 *
 Ans = 3628800
 */