#include <iostream>
using namespace std;
struct Item {
    string name;
    int quantity;
    float price;
};
struct Buyer {
    string name;
    string mobileNumber;
    string dateofpurchase;
    string todaytime;
};
int main() {
    int numItems;
    const float GST_RATE = 18;

    cout << "-------------------------------------------------\n";
    cout << "    +-+-+-+-+-+DE DHANA DAN SHOP+-+-+-+-+-+-\n";
    cout << "-------------------------------------------------\n";
    cout << "        ***** WELCOME TO OUR SHOP*****\n";
    cout << "-------------------------------------------------\n";
    cout << "           ****BUYER DETAILS****\n";
    cout << "-------------------------------------------------\n";
    Buyer buyer;
    cout << "ENTER THE DATE OF PURCHASE : ";
    getline(cin,buyer.dateofpurchase);
     cout << "TODAY TIME IS : ";
    getline(cin,buyer.todaytime);
    cout << "-------------------------------------------------\n";
    cout << "ENTER BUYER NAME: ";
    getline(cin, buyer.name);
    cout << "ENTER BUYER MOBILE NUMBER: ";
    getline(cin, buyer.mobileNumber);
    cout << "-------------------------------------------------\n";
    cout << "ENTER THE NUMBER OF ITEMS  : ";
    cin >> numItems;
    Item billItems[10];
    for (int i = 0; i < numItems; i++) {
        cout << "-------------------------------------------------\n";
        cout << "ENTER THE NAME OF ITEM " << i + 1 << ": ";
        cin >> billItems[i].name;
        cout << "ENTER THE QUANTITY OF ITEM " << i + 1 << ": ";
        cin >> billItems[i].quantity;
        cout << "ENTER THE PRICE OF ITEM " << i + 1 << ": ";
        cin >> billItems[i].price;
    }
    cout << "-------------------------------------------------\n";
    cout << "NAME       QUANTITY         PRICE        TOTAL\n";
    cout << "-------------------------------------------------\n";
    float subtotal = 0.0;
    for (int i = 0; i < numItems; i++) {
        float itemTotal = billItems[i].quantity * billItems[i].price;
        subtotal += itemTotal;
        cout << billItems[i].name << "             "<<billItems[i].quantity
             << "             $" << billItems[i].price
             << "            $" << itemTotal << "\n";
    }
    float gstAmount = subtotal * (GST_RATE / 100.0);
    float totalCostInINR = subtotal + gstAmount;
    cout << "-------------------------------------------------\n";
    cout << "TOTAL COST (INCLUDING GST) IS : $  " << totalCostInINR << "\n";
    cout << "-------------------------------------------------\n";
    cout << "           ****BILL DETAILS & NOTE****\n";
    cout << "-------------------------------------------------\n";
    cout << "EATING ITEM IS NOT RETURNABLE.  \n";
    cout << "CLOTH ITEM IS 7 DAY REPLACEMENT. \n";
    cout << "BILL IS NECESSARY FOR EVERYTHING. \n";
    cout << "NO CASE IS RETURNABLE ON ANY ITEMS. \n";
    cout << "-------------------------------------------------\n";
    cout << "      ********THANK YOU VISIT AGAIN********\n";
    cout << "-------------------------------------------------\n";
    return 0;
}
/*
-------------------------------------------------
    +-+-+-+-+-+DE DHANA DAN SHOP+-+-+-+-+-+-
-------------------------------------------------
        ***** WELCOME TO OUR SHOP*****
-------------------------------------------------
           ****BUYER DETAILS****
-------------------------------------------------
ENTER THE DATE OF PURCHASE : 21-12-2024
TODAY TIME IS : 04:30 PM
-------------------------------------------------
ENTER BUYER NAME: HIMANSHU
ENTER BUYER MOBILE NUMBER: 7698797984
-------------------------------------------------
ENTER THE NUMBER OF ITEMS  : 2
-------------------------------------------------
ENTER THE NAME OF ITEM 1: COCO
ENTER THE QUANTITY OF ITEM 1: 1
ENTER THE PRICE OF ITEM 1: 100
-------------------------------------------------
ENTER THE NAME OF ITEM 2: 7UP
ENTER THE QUANTITY OF ITEM 2: 5 
ENTER THE PRICE OF ITEM 2: 20
-------------------------------------------------
NAME          QUANTITY       PRICE        TOTAL
-------------------------------------------------
COCO            1            $100          $100
7UP             5            $20           $100
-------------------------------------------------
TOTAL COST (INCLUDING GST) IS : $  236
-------------------------------------------------
           ****BILL DETAILS & NOTE****
-------------------------------------------------
EATING ITEM IS NOT RETURNABLE.
CLOTH ITEM IS 7 DAY REPLACEMENT.
BILL IS NECESSARY FOR EVERYTHING.
NO CASE IS RETURNABLE ON ANY ITEMS.
-------------------------------------------------
      ********THANK YOU VISIT AGAIN********
-------------------------------------------------
*/