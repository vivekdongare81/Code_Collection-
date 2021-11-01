#include <iostream>
using namespace std;
/* int main()
{
    string name;
    char chr;
    cout << "Enter the name to check occurance of letter in it  ";
    getline(cin, name);
    cout << " Enter the letter whose Occurance you want ";
    cin >> chr;
    int length = name.length();
    int firstoccurance = -1;
     int  lastoccurance = -1;
    for (int i=0; i<=length;i++)
    {
        if (name[i]==chr)
        {
            lastoccurance =i;
        }
    }
        for (int j = length; j >= 0; j--)
         {
            if (name[j] == chr)
            {
                firstoccurance = j;
            }
         }
    
    
    if (firstoccurance == lastoccurance && firstoccurance == -1)
                cout << " Sorry The Character you Entered is not present in String";
            if (firstoccurance != -1 && firstoccurance != -1)
                cout << " First Occurance is at index :" << firstoccurance<<endl;
            cout << " Last Occurance is at index  :" << lastoccurance<<endl;
     }


       */

int main()
{
    string str;
    char c;
    cout << "Enterthestring:" << endl;
    getline(cin, str);
    cout << "Enterthecharacter:" << endl;
    cin >> c;
    int startIndex = -1;
    int endIndex = -1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == c)
        {
            if (startIndex == -1)
            {
                startIndex = i;
            }
            endIndex = i;
        }
    }
    if (startIndex == -1)
    {
        cout << "Thecharacterisnotfoundinthestring." << endl;
    }
    else
    {
        cout << "Firstoccurrence:" << startIndex + 1 << endl;
        cout << "Lastoccurrence:" << endIndex + 1 << endl;
    }
    return 0;
}