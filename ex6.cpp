#include <iostream>
using namespace std;
class report 
{
    private:
    int adno;
    char name[20];
    float marks[5];
    float average;

    void getavg() 
    {
        float sum = 0;
        for (int i=0;i<5;i++) 
        {
            sum+=marks[i];
        }
        average=sum/5;
    }
    public:
    void readinfo() 
    {
        cout << "Enter 4 digit Admission Number = ";
        cin >> adno;
        cout << "Enter Name = ";
        cin >> name;
        cout << "Enter Marks for 5 subjects =" <<endl;
        for(int i=0;i<5;i++) 
        {
            cout << "Subject "<<i+1<<"  =";
            cin >> marks[i];
        }
        getavg();
    }

    void disinfo() 
    {
        int j=1;
        cout << "\nAdmission Number = " << adno <<endl;
        cout << "Name = " << name <<endl;
        for (int i=0;i<5;i++) 
        {
            cout << "Subject "<< j++ << " = ";
            cout << marks[i] << "\n";
        }
        cout << "Average Marks: " << average <<endl;
    }
};

int main() 
{
    report r;
    r.readinfo();
    r.disinfo();
}
