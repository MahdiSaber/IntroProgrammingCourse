#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int sum = 0;
	int a;
	cout << "Please input the number with 6 digits: ";
	cin >> a;
	for (int i = 0; i < 6; i++)
	{
		sum = sum + (a % 10);
		a = a / 10;
	}
	cout << sum<<endl;

	return 0;
}