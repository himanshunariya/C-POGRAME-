#include<iostream>
using namespace std;
class student
{
    int admno;
    char sname[20];
    float eng,math,sci,total;
    float ctotal()
    {
        return eng+math+sci;
    }
    public:
    void tackdata()
    {
        cout << "enter value of admno = ";
        cin >> admno;
        cout << "enter value of sname = ";
        cin >> sname;
        cout << "enter marks of english = ";
        cin >> eng;
        cout << "enter marks of maths = ";
        cin >> math;
        cout << "enter marks of science = ";
        cin >> sci;
        total = ctotal();
    }
    void showdata()
    {
        cout << " admno = " << admno << endl;
        cout << " sname = " << sname << endl;
        cout << " english = " << eng << endl;
        cout << " maths = " << math << endl;
        cout << " science = " << sci << endl;
        cout << " total = " << total << endl;
    }
};

int main()
{
    student s;
    s.tackdata();
    s.showdata();
}