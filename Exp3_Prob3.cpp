#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main ()
{
	int a, b[30], c, d, e, z, w, u;
	char str[5], x;
	
	cout << "Please enter the quantity of number input: ";
	cin >> a;
	
	cout << "Please enter the quantity of letter input: ";
	cin >> u;
	
	cout << "Please enter any integer: " << endl;
	for (c = 0; c < a; c++)
	{
		cin >> b[c];
	}
	
	cout << "Sorting...";
	cout << endl;
	cout << endl;
	for (c = 0; c < a; c++)
	{
		for (d = c + 1; d < a; d++)
		{
			if (b[c] > b[d])
			{
				e = b[c];
				b[c] = b[d];
				b[d] = e;
			}
		}
	}
	
	cout << "Please enter any letter: " << endl;
	for  (z = 0; z < u ; z++)
	{
		cin >> str[z];
	}
	
	cout << "Sorting...";
	cout << endl;
	cout << endl;
	{
	for (z = 0; z < str[z]; z++)
	{
		for (w = z +1; z < str [w]; w++)
		{
			if  (str[w] < str [z])
			{
				x = str[w];
				str [w] = str [z];
				str [z] = x;
			}
		}
	}
	}
	
	cout << "Final Output: ";
	for (c = 0; c < a; c++)
	{
		cout << b[c]; 
			
	}
	for (z = 0; z < u; z++)
		{
			cout << str[z];
		}
	
getch ();
return 0;
}
