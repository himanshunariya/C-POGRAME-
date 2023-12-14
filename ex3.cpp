#include <iostream>
using namespace std;
class test
{
    private:
    int testcode;
    char description[100];
    int nocandidate;
    int centerreqd;

    int calcntr() 
    {
        return (nocandidate / 100) + 1;
    }
    public:
    void schedule() 
    {
        cout << "Enter Test Code: ";
        cin >> testcode;
        cout << "Enter Description: ";
        cin >> description;
        cout << "Enter Number of Candidates: ";
        cin >> nocandidate;

        centerreqd = calcntr();
    }

    void disptest() {
        cout << "\nTest Code: " << testcode <<endl;
        cout << "Description: " << description <<endl;
        cout << "Number of Candidates: " << nocandidate <<endl;
        cout << "Centers Required: " << centerreqd <<endl;
    }
};

int main() {
    test t;
    t.schedule();
    t.disptest();
}
