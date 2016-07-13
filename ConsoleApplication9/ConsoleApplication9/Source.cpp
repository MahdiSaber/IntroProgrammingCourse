#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a = 1;
	int b = 1;

	int c = 2;
	int value = 2;

	if ((a == b) || (a = value) || (b == c))
		value = value + a;

	cout << value << endl;

	return 0;
}