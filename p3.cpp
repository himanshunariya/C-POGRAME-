#include<iostream>
using namespace std;
class box
{
    int l,b,h;
    public:
    int volume()
    {
        return l*b*h;
    }
    void setdata(int p, int q, int r)
    {
        l=p , b=q , h=r;
    }
    box operator+(box &n)
    {
        box t;
        t.l = l + n.l;
        t.b = b + n.b;
        t.h = h + n.h;
        return t;
    }
    box operator-(box &n)
    {
        box t;
        t.l = l - n.l;
        t.b = b - n.b;
        t.h = h - n.h;
        return t;
    }
    box operator++(int)
    {
        box t;
        t.l = l++;
        t.b = b++;
        t.h = h++;
        return t;
    }
};
int main()
{
    box a,b,c,d,e;
    a.setdata(5,9,8);
    cout << "volume of box a = " << a.volume() << endl;
    b.setdata(9,10,12);
    cout << "volume of box b = " << b.volume() << endl;
    c=a+b;
    cout << "volume of box c = " << c.volume() << endl;
    e=a-b;
    cout << "volume of box c = " << e.volume() << endl;
    d=c++;
    cout << "volume of box d = " << d.volume() << endl; 
}