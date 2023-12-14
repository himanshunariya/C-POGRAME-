#include <iostream>
using namespace std;
class Batsman 
{
private:
    int bcode;
    char bname[20];
    int innings;
    int notout;
    int runs;
    float batavg;

public:
    void readdata() 
    {
        cout << "Enter Batsman Code: ";
        cin >> bcode;
        cout << "Enter Batsman Name: ";
        cin >> bname;
        cout << "Enter Innings: ";
        cin >> innings;
        cout << "Enter Not Out: ";
        cin >> notout;
        cout << "Enter Runs: ";
        cin >> runs;
        calcavg();
    }

    void calcavg() 
    {
        batavg = runs/(innings - notout);
    }

    void displaydata() 
    {
        cout << "\nBatsman Code: " << bcode <<endl;
        cout << "Batsman Name: " << bname <<endl;
        cout << "Innings: " << innings <<endl;
        cout << "Not Out: " << notout <<endl;
        cout << "Runs: " << runs <<endl;
        cout << "Batting Average: " << batavg <<endl;
    }
};

int main() 
{
    Batsman b;
    b.readdata();
    b.displaydata();
}
