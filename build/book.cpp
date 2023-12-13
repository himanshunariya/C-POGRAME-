#include<iostream>
using namespace std;
class BOOK 
 {
private:
    int BOOK_NO;
    char BOOKTITLE[20]; 
    float PRICE;

    float TOTAL_COST(int N) 
    {
        return N * PRICE;
    }

public:
    void INPUT()
    {   
        cout << "Enter BOOK Number: ";
        cin >> BOOK_NO;
        cout << "Enter BOOK Title: ";
        char ch;
        int i = 0;
        while (cin.get(ch) && ch != '\n' && i < 19) 
        { 
            BOOKTITLE[i++] = ch;
        }
        BOOKTITLE[i] = '\0'; 

        cout << "Enter Price per Copy: ";
        cin >> PRICE;
    }

    void PURCHASE() 
    {
        int N;
        cout << "Enter the number of copies to be purchased: ";
        cin >> N;
        float totalCost = TOTAL_COST(N);
        cout << "----------------------------------------------" <<endl;
        cout << "Total cost to be paid: " << totalCost << endl;
        cout << "----------------------------------------------" <<endl;
    }
};

int main() 
{
    BOOK bookObject;
    bookObject.INPUT();
    bookObject.PURCHASE();

    return 0;
}
