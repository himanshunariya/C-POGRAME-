#include<iostream>
using namespace std;
class REPORT 
{
private:
    int adno;
    char name[20]; 
    float marks[5];
    float average;

    void GETAVG() 
    {
        float sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += marks[i];
        }
        average = sum / 5;
    }
public:
    void READINFO() 
    {
        cout << "Enter Admission Number (4 digits): ";
        cin >> adno;
        cout << "Enter Name: ";
        char ch;
        int i = 0;
        while (cin.get(ch) && ch != '\n' && i < 19) 
        { 
            name[i++] = ch;
        }
        name[i] = '\0';
        cout << "Enter Marks for 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cin >> marks[i];
        }
        GETAVG();
    }
    void DISPLAYINFO() {
        cout << "Admission Number: " << adno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks for 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main() 
{
    REPORT reportObject;
    reportObject.READINFO();
    reportObject.DISPLAYINFO();
    return 0;
}
