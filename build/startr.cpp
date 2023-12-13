#include <iostream>
using namespace std;
int main() 
{
    int a, b, n;

    cout << "Enter the value: ";
    cin >> n;

    a = 1;
    do 
    {
        b = 1;
        do 
        {
            cout << "*";
            b++;
        }
            while (b <= a);
            cout << std::endl;
        a++;
    } 
            while (a <= n);

    return 0;
}
