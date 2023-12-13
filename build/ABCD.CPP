#include <iostream>
using namespace std;
int main()  
{
    int a, b, n, c = 65;
    a = 1;
    do 
    {
           b = a;
           do 
    {
            cout << static_cast<char>(c + b - 1) << "\t";
            b--;
    }   
            while (b >= 1);
            cout << endl;
            a++;
    }  
            while (a <= 5);

    return 0;
}
