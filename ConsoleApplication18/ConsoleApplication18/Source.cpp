#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a;
	int b = 10000;
	int sum = 0;
	cin >> a;
	for (int i = 0; i < 5; i++)
	{
		int r = a % 10;
		sum = sum + (r*b);
		a = a / 10;
		b = b / 10;
	}
	cout << sum;

	return 0;
}