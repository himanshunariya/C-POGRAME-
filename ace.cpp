/*#include <iostream>
using namespace std;
int main() {
    int a, n, b;

    cout << "Enter a value for n: ";
    cin >> n;

    for (a = 65; a <= n; a++) {
        cout << static_cast<char>(a) << std::endl;
        a = a + 1;
    }

    return 0;
}
//rigth 65 on output...*/
#include <iostream>
using namespace std;
int main() 
{
    int a, n, sum = 0;

    cout << "Enter value: ";
    cin >> n;
    for (a = 1; a <= n; a++) 
    {
        if (a % 2 == 0) 
        {
            sum = sum + a;
        }
    }
    std::cout << sum << std::endl;

    return 0;
}
