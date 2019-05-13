#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char a[3][25] = {"Province A","Province B", "Province C"};
	int x[3][7];
	
	for(int b = 0; b < 3; b++)
		{
			cout << "The Temperature of " << a[b] << " is : ";
			cout << endl;
	
			for(int c=0; c<7; c++)
				{
					cout << a[b] << ", Day " << c+1 << ": ";
					cin >> x [b][c];
					cout << endl;
				}		
		}
		
	for(int b = 0; b < 3; b++)
		{
			cout << "The temperature gathered in " << a[b] <<" is : ";
			cout << endl;
		
			for(int c=0; c<7; c++)
				{
					cout << a[b] << ", Day " << c+1 << " is : " << x[b][c];
					cout << endl;
				}
		}
	
	
	getch();
	return 0;
}
