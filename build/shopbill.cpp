#include <iostream>
#include <iomanip> 
using namespace std;
struct Item 
{
    char  name[50];
    int   quantity;
    float price;
};
int main() 
{
    int numItems;
    cout << "-------------------------------------------------\n";
    cout << "    +-+-+-+-+-+DE DHANA DAN SHOP+-+-+-+-+-+-";
    cout << "\n-------------------------------------------------\n";
    cout << "        ***** WELCOME TO OUR SHOP*****\n";
    cout << "-------------------------------------------------\n";
    cout << "ENTER THE NUMBER OF ITEMS ON THE BILL  : ";
    cin >> numItems;
    Item* billItems = new Item[numItems];
    for (int i = 0; i < numItems; i++) 
    {
        cout << "-------------------------------------------------\n";
        cout << "ENTER THE NAME OF ITEM " << i + 1 << ": ";
        cin.ignore(); 
        cin.getline(billItems[i].name, sizeof(billItems[i].name));
        cout << "ENTER THE QUANTITY OF ITEM " << i + 1 << ": ";
        cin >> billItems[i].quantity;
        cout << "ENTER THE PRICE OF ITEM " << i + 1 << ": ";
        cin >> billItems[i].price;
    }
    cout << "-------------------------------------------------\n";
    cout << setw(20) << left << "ITEM NAME" << setw(10) << "QUANTITY" << setw(10) << "PRICE"
     << setw(10) << "TOTAL" << "\n";
    cout << "-------------------------------------------------\n";
    float totalCost = 0.0;
    for (int i = 0; i < numItems; i++) 
    {
        float itemTotal = billItems[i].quantity * billItems[i].price;
        totalCost += itemTotal;
        cout << setw(20) << left << billItems[i].name << setw(10) <<
        billItems[i].quantity << "$"<< fixed << setprecision(2) << billItems[i].price 
        << "$" << itemTotal << "\n";
    }
    cout << "-------------------------------------------------\n";
    cout << "TOTAL COST: $" << std::fixed << std::setprecision(2) << totalCost << "\n";
    cout << "-------------------------------------------------\n";
    cout << "           ****BILL DETAILS & NOTE****\n";
    cout << "-------------------------------------------------\n";
    cout << "EATING ITEM IS NOT RETURNABLE.     \n";
    cout << "CLOTH ITEM IS 7 DAY REPLACEMENT.   \n";
    cout << "BILL IS NECESSARY FOR EVERYTHING.  \n";
    cout << "NO CASE IS RETURNABLE ON ANY ITEMS. \n";
    cout << "-------------------------------------------------\n";
    cout << "      ********THANK YOU VISIT AGAIN********\n";
    cout << "-------------------------------------------------\n";
    delete[] billItems; 
    return 0;
}

    // OUTPUT
/*
-------------------------------------------------
   -+-+-+-+-+-+DE DHANA DAN SHOP+-+-+-+-+-+-
-------------------------------------------------
        ***** WELCOME TO OUR SHOP*****
-------------------------------------------------
ENTER THE NUMBER OF ITEMS ON THE BILL  : 2
-------------------------------------------------
ENTER THE NAME OF ITEM 1: CHIPS
ENTER THE QUANTITY OF ITEM 1: 20
ENTER THE PRICE OF ITEM 1: 40
-------------------------------------------------
ENTER THE NAME OF ITEM 2: CHOCOLATE
ENTER THE QUANTITY OF ITEM 2: 20
ENTER THE PRICE OF ITEM 2: 50
-------------------------------------------------
Item Name           Quantity  Price     Total
-------------------------------------------------
CHIPS               20        $40.00   $800.00
CHOCOLATE           20        $50.00   $1000.00
-------------------------------------------------
Total Cost: $1800.00
-------------------------------------------------
BILL DETAILS & NOTE:-
EATING ITEM IS NOT RETURNABLE.
CLOTH ITEM IS 7 DAY REPLACEMENT.
BILL IS NECESSAREY FOR EVERYTHING.
NO CASE IS RETUNABLE ON ANEY ITEMS.
-------------------------------------------------
      ********THANKU YOU VISIT AGAIN********
-------------------------------------------------
*/ 

