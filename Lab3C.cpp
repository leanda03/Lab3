// Lab 3C

#include <iostream>
using namespace std;

int main() {
	double q, d, n, p, total;

	cout << "Enter the number of quarters: ";
	cin >> q;

	cout << "Enter the number of dimes: ";
	cin >> d;

	cout << "Enter the number of nickels: ";
	cin >> n;

	cout << "Enter the number of pennies: ";
	cin >> p;

	cout << "\nYou entered " << q << " quarters.";
	cout << "\nYou entered " << d << " dimes.";
	cout << "\nYou entered " << n << " nickels.";
	cout << "\nYou entered " << p << " pennies.";

	total = round(((q * 0.25) + (d * 0.1) + (n * 0.05) + (p * 0.01)) * 100.0) / 100.0;

	cout << "\nYour total is " << int(total) << " dollars and " << round((total - int(total)) * 100) << " cents.";
	
	return 0;
}