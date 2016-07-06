#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float s,tax = 0; // float s = 0;
					 //float tax =0;
	cout << "Please enter you salary:"<<endl;
	cin >> s;
	if (s<150000)
	{
		tax = 0;
	}
	else if(s<230000)
	{
		tax = s*0.1;
	}
	else if (s < 280000)
	{
		tax = s*0.12;
	}
	else if(s<380000)
	{
		tax = s*0.15;
	}
	else
	{
		tax = s*0.2;
		
	}

	cout << "Your tax is: " << tax << "\n";

	//_getch();
	return 0;
}