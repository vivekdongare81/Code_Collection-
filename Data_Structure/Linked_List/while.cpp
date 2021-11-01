#include <iostream>
#include <cmath>

using namespace std;

int minu();
void primeChecker();
void fact(int);
char nextCh (char);
int abs (int);

int main()
{
	char op, ch;
	int n;
	double x;

	op = minu();
	while(op != 'q')
	{
		op = getchar();
		switch (op)
		{
		case '1':	primeChecker();
					break;
		case '2':	cout << "Enter an integer: ";
					cin >> n;
					fact(n);
					break;
		case '3':	cout << "Enter a character: ";
					cin >> ch;
					cout << "Next character is: " << nextCh(ch);
					break;
		case '4':	cout << "Enter a real number: ";
					cin >> x;
					cout << "Absolute value is: " << abs(x);
					break;
		default:	cout << "Wrong input. Try again...";
					break;
		}
		op = minu();
	}
	cout << "Thanks for using my program. Goodbye!!\n\n";

	return 0;
}


int minu()
{
	int n;

		cout <<endl<< "1. Prime Checker" << endl << "2. Factorial" << endl << "3. Next Character" << endl << "4. Absolute Value" ;
	    cout << endl << "Enter your choice, or 'q' to quit: ";
        cin >> n;
		return n;
}
void primeChecker()
{
	int n,i,pr;
	cout << "Enter an integer: ";
	cin >> n;

	pr=1;

	for (i=2;i<n;i++)
	{
		if(n%i==0)
		{
			pr=-1;
		}
	}
	if(pr==1)
	{
		cout << "This is a prime number" << endl;
	}
	else
	{
		cout << "This is NOT a prime number." << endl;
	}

}


void fact(int n)
{
	int i, f=1;
	for(i=1;i<=n;i++)
	f=f*i;
	cout << n << "!" << " = " << f << endl ;
}

char nextCh(char ch)
{
	
	ch=ch+1;
	return ch;
}

int abs(int x)
{
	return fabs(x);
}