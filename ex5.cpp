#include <iostream>
using namespace std;
class book
{
    private:
    int bookno;
    char booktitle[20];
    float price;

    float totalcost(int numcopies) 
    {
        return numcopies * price;
    }

    public:
    void input() 
    {
        cout << "Enter BOOK Number: ";
        cin >> bookno;
        cout << "Enter BOOK Title: ";
        cin >> booktitle;
        cout << "Enter Price per Copy: ";
        cin >> price;
    }

    void purchase() {
        int numcopies;
        float totalcost;
        cout << "Enter the number of copies to be purchased: ";
        cin >> numcopies;
        totalcost =totalcost(numcopies);
        cout << "Total Cost: $" << totalcost <<endl;
    }
};

int main() 
{
    book b;
    b.input();
    b.purchase();
}
