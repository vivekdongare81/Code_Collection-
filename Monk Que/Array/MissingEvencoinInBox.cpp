#include<iostream>
using namespace std;
 

/*Sage of the missing coin

A teacher came to the class with a large box that has several coins. Each coin has a number printed on it. Before coming to the class, she ensured that All the numbers occur an even number of

times.

However, while coming to the class, one coin fell down and got lost. She wants to find out the number on the missing coin.

Your task is to find the number on the missing coin.

Input Format:

The original number of coins and the actual number on each of the coins, separated by spaces.

Output Format:

The number on the missing coin.*/

/* use nof Exor operator to check the repeated value*/

int main()
{
    int n;
    cout<<endl<<"Enter The Num of Coins WAS in Box (Before Losing 1 coin )";
    cin>>n;
    int arr[n-1];  //n-1 bcoz 1 coin gets lost 

    cout<<endl<<"Enter The values of remaining coins";
    int exorvalue=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];  
        exorvalue=exorvalue^arr[i];
    }
     
    if(exorvalue!=0)
    {
        cout<<endl<<"Missing coin is "<<exorvalue;
    }


}

