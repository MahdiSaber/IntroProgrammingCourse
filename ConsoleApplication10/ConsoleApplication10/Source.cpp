#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a = 1;
	int b = 1;
	int value = 2;

	if ((a == b) && (value = a - 1) && (true == true))
	{
		value = 333;
	}

	cout << value << endl;

	return 0;
}