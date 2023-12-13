#include<iostream>
using namespace std;
class TEST 
{
private:
    int TestCode;
    char Description[100]; 
    int NoCandidate;
    int CenterReqd;

    int CALCNTR() 
    {
        return (NoCandidate / 100 + 1);
    }
public:
    void SCHEDULE() 
    {
        cout << "Enter Test Code: ";
        cin >> TestCode;

        cout << "Enter Description: ";
        cin.ignore(); 
        cin.getline(Description, sizeof(Description));

        cout << "Enter Number of Candidates: ";
        cin >> NoCandidate;

        CenterReqd = CALCNTR();
        cout << "----------------------------------------------" <<endl;
    }

    void DISPTEST() {
        cout << "Test Code: " << TestCode << std::endl;
        cout << "Description: " << Description << std::endl;
        cout << "Number of Candidates: " << NoCandidate << std::endl;
        cout << "Number of Centers Required: " << CenterReqd << std::endl;
        cout << "----------------------------------------------" <<endl;
    }
};

int main()
{
    TEST testObject;
    testObject.SCHEDULE();
    testObject.DISPTEST();
    return 0;
}
