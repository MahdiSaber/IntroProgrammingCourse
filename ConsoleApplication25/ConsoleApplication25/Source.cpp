#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int temp = 0;
	int a[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Input number " << i<<": ";
		cin >> a[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "The sorted array is: \n";
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}