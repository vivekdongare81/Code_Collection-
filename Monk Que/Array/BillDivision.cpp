#include <iostream>
using namespace std;

/*    Vintage of the correct value

Two Friends Anna and Brian, are deciding how to split the bill at a dinner. Each will only pay for the items they consume. Brian gets the check and calculate Anna's portion. You must determine if his calculation is correct.

For example, assume the bill has the following prices: billa[2,4,6]. Anna declines to eat item kubill[2] which costs 6. If Brian calculates the bill correctly, Anna will pay (2+4)/2=3. If he includes the cost of bill[2], he will calculate (2+4+6)=6. In the second case, he should refund 3 to Anna.

Input Format:

The first line contains two space-separated integers n and k, the number of items ordered and the based index of the item that Anna did not eat.

The second line contains n space-separated integers billi) where Ocican.

The third line contains an integer, the amount of money that Brian charged Anna for her share of the bill.

Mutput Format:

Consists only an integer.   
                            */
int main()
{
    int n;
    cout << endl
         << "Enter No.of Orders";
    cin >> n;
    int arr[n];
    cout << endl
         << "Enter Prices of Iteams They Eat";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "Enter The Index of Order which Annie dont pay";
    int x;
    cin >> x;

    cout << endl
         << "Enter the amount Annie give to Jasiee to pay";
    int ahalfpay;
    cin >> ahalfpay;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            continue;
        }
        sum = sum + arr[i];
    }
    if (ahalfpay == (sum / 2))
    {
        cout << endl
             << "annie Paid Correct Ammount";
    }
    else if (ahalfpay > sum / 2)
    {
        cout << endl
             << "Annie Will get " << ahalfpay - sum / 2 << " In return";
    }
    else
    {
        cout << endl
             << "Annie have to pay " << sum / 2 - ahalfpay << " More. ";
    }
}
