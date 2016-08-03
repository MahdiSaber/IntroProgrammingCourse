#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a[10] = { 0 };
	int num;

	for (int i = 0; i < 10; i++)
	{
		cout << "Please input number[" << i << "]:\n";
		cin >> num;
		a[i] = num;
	}
	cout << "These numbers are the result:\n";
	for (int j = 0; j < 10; j++)
	{
		if (a[j] == j)
		{
			cout << a[j] << endl;
		}
	}
	return 0;
}