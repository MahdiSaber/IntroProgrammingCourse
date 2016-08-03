#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a[10] = { 10,7,20,40,50,60,70,888,90,100 };
	int min=a[0];
	int max = a[0];
	for (int i = 1; i < 10; i++)
	{
		if (a[i] > max)
			max = a[i];
		else if (a[i] < min)
			min = a[i];
	}
	cout << max << "\n" << min<<endl;
	return 0;
}