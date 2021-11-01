/*
 
. Pricing Pebbles

In Rajasthan, there is a store. The store has different categories of products in Stock as shown:

Item number=[101,102,103,104]

Item Name=[Milk, Cheese,Ghee,Bread]

Price=[42,50,15,16)

Stock={10,20,15,16]

When user give input with 2 value as:

1. Item number for item which user wants to buy.

2. Quantity for the item entered above.

When user enters above input, the code should check the stock and consider following scenarios

1. If quantity is less than stock and the item is available display a notification message showing:

Output Line 1: <price> INR

Output Line 2: <quantity> LEFT

2. If quantity is greater than stock, then display a notification message showing:

Output Line 1: NO STOCK

Output Line 2: <quantity> LEFT

3. If user enter item number which is not present then display a message showing:

Output: INVALID INPUT*/

#include <iostream>
using namespace std;

int main()
{

    int Item_number[4] = {101, 102, 103, 104};

    string Item_Name[4] = {"Milk", "Cheese", "Ghee", "Bread"};

    int Price[4] = {42, 50, 15, 16};

    int Stock[4] = {10, 20, 15, 16};

    while (1)
    {

        int n;
        cout << endl
             << "Enter Code Of Item U Want To Buy";
        cin >> n;
        int m;
        cout << endl
             << "Enter Quantity Of Items U Want";
        cin >> m;
        int index = -1;
        for (int i = 0; i < 4; i++)
        {
            if (Item_number[i] == n)
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            cout << endl
                 << "Invalid Input";
        }
        else
        {

            if (Stock[index] < m)
            {
                cout << endl
                     << " No Stock " << endl
                     << Stock[index] << " left Only";
            }
            else
            {  Stock[index]=Stock[index]-m;
               cout<<endl<<Price[index]*m<<" Is ur Bill "<<endl<<Stock[index]<<" Quantity Left ";
            }
        }
    }
}
