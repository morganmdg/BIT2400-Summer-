//
// Created by morga on 2024-07-28.
//

#include "POS.h"

POS::POS() {
    items[0] = Item("Lemonade", 3.99);
    items[1] = Item("Mineral Water", 0.99);
    items[2] = Item("Orange Juice", 2.99);
    items[3] = Item("Tangerine Juice", 2.99);
    items[4] = Item("Iced Tea", 1.50);
    items[5] = Item("Earl Grey Tea", 1.75);
    items[6] = Item("Coffee", 2.75);

    sales = 0;
    tips = 0;
    transactions = 0;
}

void POS::printItems()
{
    for(int i = 0; i < itemsTotal; i++)
    {
        cout << i << " ) " << items[i].getName();
        cout << "  $" << items[i].getPrice() << endl;
    }
    cout << endl << itemsTotal << " ) Finish Transaction";
    cout << endl << itemsTotal + 1 << ") Cancel Transaction" << endl;
    cout << endl;
}

void POS::salesReport()
{
    cout << endl << "Transactions made: " << transactions;
    cout << endl << "Total sales: $" << sales;
    if (transactions > 0)
    {
        cout << endl << "Average sale per transaction: $ " << sales / transactions;
    }
    cout << endl << "Total tips: $" << tips << endl;
}

int POS::getInput()
{
    cout << "Enter the number of the item to add to the order: ";
    int input = -1;
    while (input < 0 || input > itemsTotal + 1)
    {
        cin >> input;
    }
    return input;
}

void POS::menu()
{
    printItems();

    float subtotal = 0;
    while(true)
    {
        int input = getInput();

        if(input < itemsTotal && input >= 0)
        {
            subtotal += items[input].getPrice();
            cout << "  Added: " << items[input].getName();
            cout << " for $" << items[input].getPrice() << endl;
            cout << "  Subtotal: " << subtotal << endl << endl;
        }
        else if (input == itemsTotal)
        {
            finalize(subtotal);
            break;
        }
        else if (input == itemsTotal + 1)
        {
            cout << "Transaction Cancelled" << endl;
            break;
        }
    }
}

void POS::finalize(float subtotal)
{
    float tax = (float)((int)(subtotal * 0.13)) / 100;
    float tip = (float)((int)(subtotal * 10)) / 100;

    subtotal += tax;
    cout << "Including tax, the subtotal is $" << subtotal << "." << endl;
    cout << "How much would you like to tip? (10% is $" << tip << ")";
    cin >> tip;
    float total = tip + subtotal;

    cout << "Amount owed: $" << total << endl << endl;

    transactions++;
    sales += subtotal;
    tips += tip;

    salesReport();
}

