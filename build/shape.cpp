#include<iostream>
using namespace std;
class area
{
    public:
    area(int a)
    {   
        cout << "-----------------------------------------------------" << endl;
        cout << "AREA OF SQURE = " << a*a << endl;
    }
    area(int a,int b)
    {
        cout << "AREYA OF RECTANGLE = " << a*b << endl;
    }
    area(double a)
    {
        cout << "AREA OF CIRCLE = " << 3.14*(a*a) << endl;
    }
    area(int a,double b)
    {
       cout << "AREA OF TRIANGLE = " << 0.5*(a*b) << endl;
       cout << "-----------------------------------------------------" << endl; 
    }
    
};
int main()
{
    area a(9),a1(8,6),a2(8.15),a3(5,8.19);
}