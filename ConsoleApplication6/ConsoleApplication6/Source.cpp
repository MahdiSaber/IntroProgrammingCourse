#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout << "Please Enter your Character: ";
	char a;
	for (;;)
	{
		cin >> a; // a = _getch();

		switch (a)
		{
		case 'y':
		case 'Y':
			cout << "Yes!";
			break;
		case 'n':
		case 'N':
			cout << "No!";
			break;

		default:
			cout << "Error!";
			break;
		}
	}

	return 0;
}