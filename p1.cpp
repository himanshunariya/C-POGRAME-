#include<iostream>
using namespace std;
class Volume
{
    int a,b;
    public:
    void volume()
    {
        cout << "Welcome...." << endl;
    }
    void volume(int x,int y)
    {
        cout << "volume of cylinder = " << 3.14*(a*a)*b << endl;
    }
    void volume(int x, double y)
    {
        cout << "volume of cone = " << 0.33*3.14*(a*a)*b << endl;
    }
    void volume(double x,double y)
    {
       cout << "volume of  pyramid = " << 0.33*(x*y) << endl;
    }
    void volume(double x , int y)
    {
        cout << "volume of prism = " << x*y << endl;
    }
    void volume(int x)
    {
        cout << "volume of cube = " << x*x*x << endl;
    }
    void volume(double x)
    {
        cout << "volume of sphere = " << 1.33*(3.14*(x*x*x)) << endl;
    }
    void volume(int x,int y,int z)
    {
        cout << "volume of cuboid = " << x*y*z << endl;
    }
};
int main()
{
    Volume v;
    v.volume();
    v.volume(10,5);
    v.volume(6,10.5);
    v.volume(5,8,10);
}