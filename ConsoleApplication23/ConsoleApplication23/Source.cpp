#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
	string days[7] = { "Sat","Sun", "Mon","Tus", "Wed","Thu","Fri" };
	int num = 1;
	while (num != 0)
	{
		cin >> num;
		switch (num)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			cout << days[num - 1]<<endl;
			break;
		case 0:
			break;
		default:
			cout << "Please re-enter the number:";
			break;
		}
	}

	return 0;
}