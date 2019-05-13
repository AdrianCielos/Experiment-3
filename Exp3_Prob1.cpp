#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main ()
{
	int a[10];
	int b, c=0, s=0, l=0;
	double x;
	
	
		for(int b=0;b<10;b++)
		{
			cout << "Please input any value of " << b+1 << ": ";
			cin >> a[b];
			cout << endl;	
		}
	
	s = a[0];
	l = a[0];
	
		for (b=1; b<=10; b++)
			{
				c = a[b];
				
				if (c < s)
					s = c;		
			}
		
		cout << "The smallest integer is: " << s << "."<< endl;
		cout << endl;
		
		for (b=1; b<=10; b++)	
			{
				c = a[b];
					
				if(c > l)
					l = c;
			}
		
		cout << "The largest integer is: " << l << "." << endl;
		cout << endl;
	
		for(b=0; b<=9; b++)
			{
			
				x += a[b];
			
			}
		
		cout << "The Total value of all inputs is: " << x << "." << endl;
		cout << endl;
		
		cout << fixed << showpoint << setprecision(2);
		
		cout<<"The Total Average of all inputs is: " << x/10 << "." << endl;
		
	
	getch();
	return 0;
	
}
