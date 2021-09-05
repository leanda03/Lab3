// Lab 3B

#include <iostream>
using namespace std;

int main() {
	double GPA, quality = 0, totalHours = 0;
	double hours[4] = {}, grades[4] = {};
	int course = 1;

	for (int i = 0; i < 4; i++) {
		cout << "Course " << course << " hours: ";
		cin >> hours[course - 1];

		cout << "Grade for course " << course << ": ";
		cin >> grades[course - 1];


		course += 1;
	}

	for (int i = 0; i < 4; i++) {
		totalHours += hours[i];
		quality += hours[i] * grades[i];
	}

	GPA = quality / totalHours;

	cout << "Total hours is: " << totalHours;
	cout << "\nTotal quality points is: " << quality;
	cout << "\nYour GPA for this semester is " << GPA;

	return 0;
}