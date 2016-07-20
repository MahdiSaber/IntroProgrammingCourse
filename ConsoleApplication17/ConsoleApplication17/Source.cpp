#include "iostream"
#include <conio.h>
using namespace std;
int main()
{
	int num;
	bool flag = false;
	cout << "Please input the number: ";
	cin >> num;
	for (int i = 2; (i < num / 2) && flag == false; i++ )
	{
		int reminder = num % i;
		if (reminder == 0)
		{
			flag = true;
		}

	}

	if (flag == true)
		cout << "The number is NOT prime" << endl;
	else
		cout << "The number is
		prime" << endl;

	return 0;
}