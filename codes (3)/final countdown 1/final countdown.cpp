#include<iostream>

using namespace std;

int main() {
	int number;

	cout << "Enter a number less than 100: ";
	cin >> number;

	if (number < 100 && number > 0) {
		cout << " Countdown: " << endl;

		for (int i = number; i >= 1; i--) {
			if (i % 2 != 0) {
				cout << i << endl;
			}
		}
	}
	else {
		cout << "Invalid input. Please enter a number between 1 and 99. " << endl;
	}
	return 0;
}