#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int digits;
	int first, second, third, forth, fiffth, six;
	int third_left, third_right;

	cout << "Enter 6digits:";
	cin >> digits;
	int n = digits;
	int count = 0;
	while (n > 0) {
		n = n / 10;
		count++;
	};
	if (count ==6) {
		first = digits / 100000;
		second = digits / 10000 % 10;
		third = digits / 1000 % 10;
		forth = digits / 100 % 10;
		fiffth = digits / 10 % 10;
		six = digits % 10;
		third_left = first + second + third;
		third_right = forth + fiffth + six;
		if (third_left == third_right)
		cout << "This is a lucky number";
			else
		cout << "This is a not a lucky number";
		}
		else
		{
			cout << "Please input only 6 digits";
		}
		
		cin.get();
		cin.get();
		return 0;
	}

	
	



	
