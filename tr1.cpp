#include <iostream>
using namespace std;
void printPascal(int n)
 {
    for (int line = 1; line <= n; line++) 
    {
        for (int space = 1; space <= n - line; space++)
            cout << "  "; 
        int coef = 1;
        for (int i = 1; i <= line; i++) 
        {
            cout << setw(4) << coef; 
            coef = coef * (line - i) / i;
        }
        cout << endl;
    }
}
int main() 
{
    int n = 5;
    printPascal(n);
    return 0;
}
