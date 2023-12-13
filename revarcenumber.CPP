#include <iostream>
using namespace std;
int main() 
{
    int a[100], b, c = 0, n;

    cout << "Enter the value of n: ";
    cin >> n;

    for (b = 1; b <= n; b++) 
    {
        cout << "Enter value: ";
        cin >> a[b];
    }

    for (b = n; b > 0; b--) 
    {
        cout << a[b] << "\t";
    }
    return 0;
}
