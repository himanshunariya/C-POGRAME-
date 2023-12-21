#include <stdio.h>
struct Item 
{
    char name[50];
    int quantity;
    float price;
};

int main() {
    int numItems;
    printf("-------------------------------------------------\n");
    printf("    +-+-+-+-+-+DE DHANA DAN SHOP+-+-+-+-+-+-");
    printf("\n-------------------------------------------------\n");
    printf("        ***** WELCOME TO OUR SHOP*****\n");
    printf("-------------------------------------------------\n");
    printf("ENTER THE NUMBER OF ITEMS ON THE BILL  : ");
    scanf("%d", &numItems);

    struct Item billItems[numItems];

    for (int i = 0; i < numItems; i++) {
        printf("-------------------------------------------------\n");
        printf("ENTER THE NAME OF ITEM %d: ", i + 1);
        scanf("%s", billItems[i].name);
        printf("ENTER THE QUANTITY OF ITEM %d: ", i + 1);
        scanf("%d", &billItems[i].quantity);
        printf("ENTER THE PRICE OF ITEM %d: ", i + 1);
        scanf("%f", &billItems[i].price);
    }
    printf("-------------------------------------------------\n");
    printf("%-20s%-10s%-10s%-10s\n", "ITEM NAME", "QUANTITITY", "PRICE", "TOTAL");
    printf("-------------------------------------------------\n");

    float totalCost = 0.0;

    for (int i = 0; i < numItems; i++) {
        float itemTotal = billItems[i].quantity * billItems[i].price;
        totalCost += itemTotal;
        printf("%-20s%-10d$%.2f$%.2f\n", billItems[i].name, billItems[i].quantity, billItems[i].price, itemTotal);
    }

    printf("-------------------------------------------------\n");
    printf("TOTAL COST: $%.2f\n", totalCost);
    printf("-------------------------------------------------\n");
    printf("           ****BILL DETAILS & NOTE****\n");
     printf("-------------------------------------------------\n");
    printf("EATING ITEM IS NOT RETURNABLE.  \n");
    printf("CLOTH ITEM IS 7 DAY REPLACEMENT. \n");
    printf("BILL IS NECESSAREY FOR EVERYTHING. \n");
    printf("NO CASE IS RETUNABLE ON ANEY ITEMS. \n");
    printf("-------------------------------------------------\n");
    printf("      ********THANKU YOU VISIT AGAIN********\n");
    printf("-------------------------------------------------\n");
    
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
CHIPS               20        $40.00$800.00
CHOCOLATE           20        $50.00$1000.00
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
 add custumar ditel..
 add gst.. 