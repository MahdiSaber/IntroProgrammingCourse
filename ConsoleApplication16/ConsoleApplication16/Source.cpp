#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a;
	int sum = 0;
	cout << "Please input your number (arbitrary digits):";
	cin >> a;
	while (a > 0)
	{
		sum = sum + (a % 10);
		a = a / 10;
 	}
	cout <<sum << endl;
	return 0;
}