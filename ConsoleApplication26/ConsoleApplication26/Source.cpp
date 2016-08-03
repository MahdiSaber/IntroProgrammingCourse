#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	double a[5];
	int tag[5];
	int temp = 0;
	//Tagged Sort Program
	//input part
	for (int i = 0; i < 5; i++)
	{
		cout << "Please input number " << i << ": ";
		cin >> a[i];
		tag[i] = i;
	}
	//processing (sorting) part
	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if (a[tag[i]] > a[tag[j]])
			{
				temp = a[tag[i]];
				a[tag[i]] = a[tag[j]];
				a[tag[j]] = temp;
			}
		}
	}
	//print part
	cout << "The sorted array is: \n";
	for (int i = 0; i < 5; i++)
	{
		cout << a[tag[i]]<<" ";
	}
	cout << endl;

	return 0;
}