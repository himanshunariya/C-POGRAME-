#include<iostream>
using namespace std;
class Area
{
    public:
    void area(int a)
    {
        cout << "area of squre = " << a*a << endl;
    }
    void area(int a,int b)
    {
        cout << "area of rectangle = " << a*b << endl;
    }
    void area(double a)
    {
        cout << "area of circle = " << 3.14*(a*a) << endl;
    }
    void area(int a,double b)
    {
       cout << "area of triangle = " << 0.5*(a*b) << endl;
    }
    
};
int main()
{
    Area a;
    a.area(9);
    a.area(8,6);
    a.area(8.15);
    a.area(5,8.19);
}
