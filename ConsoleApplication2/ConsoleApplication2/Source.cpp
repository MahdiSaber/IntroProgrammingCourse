#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout << "Please input 3 numbers: ";
	float a, b, c;
	//float sum = 0;
	float avg = 0;
	cin >> a >> b >> c;
	//sum = a + b + c;
	avg = (a + b + c) / 3;

	cout << "Your result is: ";
	cout << avg<<endl;
	//cout << sum << endl;
	return 0;
}