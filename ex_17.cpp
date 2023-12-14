#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int* ptr;
    ptr=&a;
    cout << "value of a = " << a << "\n";
    cout << "address of a = " << &a << "\n";
    cout << "address of a = " << ptr;
}