#include<iostream>

using namespace std;

int main()
{
	int digits,n;
	int count = 0;

	here:
	cout << "Enter a four digit number: ";
	cin >> digits;

	//this is count digit statement
	n = digits;
	while ( n > 0) {
		n = n / 10;
		count++;
	}

	 if (count >5)
		cout << "Completed !";
	else
		goto here; 

	cin.get();
	cin.get();

	return 0;
}