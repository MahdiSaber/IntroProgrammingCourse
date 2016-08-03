#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a[10] = {0};
	int num;

	for (int i = 0; i < 10; i++)
	{
		cout << "Please input number[" << i << "]:\n";
		cin >> num;
		a[i] = num;
	}
	cout << "The stored numbers are:\n";
	for (int j = 0; j < 10; j++)
	{
		cout << a[j]<<endl;
	}
	return 0;
}