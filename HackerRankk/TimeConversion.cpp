#include <bits/stdc++.h>

using namespace std;

/* Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 * 
 * Sample Input 0
07:05:45PM
Sample Output 0
19:05:45
 */

string timeConversion(string s) {
int size=s.size();
int sum=0;
if(s[size-2]=='A')
{
    if(s[0]=='1' && s[1]=='2')
    {
      s[0]='0';
      s[1]='0';   
    } 
}
else{
    
   int f=s[0]-'0';
   int se=s[1]-'0';
   se=se+2;
   int carry=se/10;
   f=f+1+carry;
   s[0]=f+'0';
    s[1]=se+'0';
    
}
char st[30];
s.copy(st,s.size()-2);
return st;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
