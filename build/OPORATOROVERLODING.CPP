#include<iostream>
using namespace std;

class Box 
{
    int l, b, h;

public:
    void setData(int p, int q, int r) 
    {
        l = p;
        b = q;
        h = r;
    }

    int volume() 
    {
        return l * b * h;
    }
    Box operator+(const Box &n) 
    {
        Box t;
        t.l = l + n.l;
        t.b = b + n.b;
        t.h = h + n.h;
        return t;
    }
    Box operator++(int) 
    {
        Box t;
        t.l = l++;
        t.b = b++;
        t.h = h++;
        return t;
    }
};
int main() 
{
    Box a, b, c, d;
    
    a.setData(2, 2, 2);
    cout << "Volume of Box A is " << a.volume() << endl;

    b.setData(3, 3, 3);
    cout << "Volume of Box B is " << b.volume() << endl;

    c = a + b; // 5, 5, 5
    cout << "Volume of Box C is " << c.volume() << endl;

    d = c++; // 6, 6, 6
    cout << "Volume of Box D is " << d.volume() << endl;

    return 0;
}
