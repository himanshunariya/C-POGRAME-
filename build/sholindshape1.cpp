#include<iostream>
using namespace std;
class volume 
{
private:
    int a, b;
public:
    volume() 
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "WELCOME...." << endl; 
    }
    volume(int x, int y) 
    {
        a = x;
        b = y;
        cout << "VOLUME OF CYLINDER= " << 3.14 * (a * a) * b << endl;
    }
    volume(int x, double y)
    {
        a = x;
        b = static_cast<int>(y);  
        cout << "VOLUME OF CONE = " << 0.33 * 3.14 * (a * a) * b << endl;
    }
    volume(double x, double y) 
    {
        cout << "VOLUME OF PYRAMID = " << 0.33 * (x * y) << endl;
    }
    volume(double x, int y) 
    {
        cout << "VOLUME OF PRISM = " << x * y << endl;
    }
    volume(int x) 
    {
        a = x;
        cout << "VOLUME OF CUBE = " << a * a * a << endl;
    }
    volume(double x) 
    {
        cout << "VOLUME OF SPHERE= " << 1.33 * (3.14 * (x * x * x)) << endl;
    }
    volume(char x) 
    {
        int a = int(x);
        cout << "VOLUME OF HEMISPHERE = " << 0.67 * (3.14 * (a * a * a)) << endl;
    }
    volume(int x, int y, int z) 
    {
        cout << "VOLUME OF CUBOID = " << x * y * z << endl;
        cout << "-----------------------------------------------------" << endl;
    }
};
int main() {
    volume v, v1(5, 5), v2(5, 6.8), v3(9, 8), v4(9.1, 10), v7(10), v8(5.8), v6(5, 9, 2);
    return 0;
}
