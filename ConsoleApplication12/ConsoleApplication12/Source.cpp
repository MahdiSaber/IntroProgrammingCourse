#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a;
	int min = 999999;
	int max = -99999;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		if (a < min)
			min = a;
		if (a > max)
			max = a;
	}
	cout << "Min is: " << min<<endl;
	cout << "Max is: " << max << endl;
	
	return 0;
}