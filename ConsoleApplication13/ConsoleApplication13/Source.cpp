#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a;
	bool flag = false;

	cin >> a;
	for (int i = 0; i < 6; i++ && flag == false)
	{
		int rem = a % 10;

		if (rem == 0)
		{
			cout << "This number has 0"<<endl;
			flag = true;
		}

		a = a / 10;
	}
	
	return 0;
}