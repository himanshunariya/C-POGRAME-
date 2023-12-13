#include <iostream>
using namespace std;
int main() 
{
    int a, n, sumEven = 0, sumOdd = 0;
    cout << "Enter value: ";
    cin >> n;
    for (a = 1; a <= n; a++) 
    {
        if (a % 2 == 0) 
        {
            sumEven = sumEven + a;
        } else {
            sumOdd = sumOdd + a;
        }
    }
    cout << "Sum of even numbers: " << sumEven << std::endl;
    cout << "Sum of odd numbers:  " << sumOdd << std::endl;

    return 0;
}
 