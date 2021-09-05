// Lab 3A

#include <iostream>
using namespace std;

int main() {
	double amountDue, APR;

	cout << "Amount owed: $";
	cin >> amountDue;

	cout << "APR: ";
	cin >> APR;

	cout << "Monthly percentage rate: " << APR / 12;

	cout.precision(4);

	cout << "\nMinimum payment: $" << (amountDue * (APR * 0.01)) / 12;

	return 0;
}