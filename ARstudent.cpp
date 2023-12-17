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
        cout << "----------------------------------------------" << endl;
        cout << "Admission Number: " << admno;
        cout << "\nStudent Name: " << sname;
        cout << "\nMarks in English: " << eng;
        cout << "\nMarks in Math: " << math;
        cout << "\nMarks in Science: " << science;
        cout << "\nTotal Marks: " << total << endl;
        cout << "----------------------------------------------" << endl;
    }
};

int main() 
{
    const int numOfStudents = 3; 
    Student students[numOfStudents];

    for (int i = 0; i < numOfStudents; ++i) 
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].Takedata();
    }

    cout << "\nDetails of all students:\n";

    for (int i = 0; i < numOfStudents; ++i) 
    {
        students[i].Showdata();
    }

    return 0;
}
