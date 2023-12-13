#include <iostream>
using namespace std;
class Student 
{
private:
    int admno;
    string sname;
    float eng, math, science, total;
    float ctotal() 
    {
        return eng + math + science;
    }
public:
    void Takedata() 
    {
        cout << "Enter Admission Number: ";
        cin >> admno;
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, sname);
        cout << "Enter Marks in English: ";
        cin >> eng;
        cout << "Enter Marks in Math: ";
        cin >> math;
        cout << "Enter Marks in Science: ";
        cin >> science;
        total = ctotal();
    }
    void Showdata() 
    {
        cout << "----------------------------------------------" <<endl;
        cout << "Admission Number: " << admno;
        cout << "\nStudent Name: " << sname;
        cout << "\nMarks in English: " << eng;
        cout << "\nMarks in Math: " << math;
        cout << "\nMarks in Science: " << science;
        cout << "\nTotal Marks: " << total << endl;
        cout << "----------------------------------------------" <<endl;
    }
};
int main() {
    Student studentObj;
    studentObj.Takedata();
    studentObj.Showdata();
    return 0;
}
