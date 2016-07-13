#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int i = 999;
	for (int i = 1; i <= 100; i++)
	{
		int rem_3 = i%3;
		int rem_7 = i%7;

		if ((rem_3 == 0) && (rem_7 == 0))
			cout << i<<endl;
	}
	cout << i;

	return 0;
}