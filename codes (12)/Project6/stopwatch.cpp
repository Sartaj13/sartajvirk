#include <iostream>

using namespace std;

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	while (number >= 0) {
		cout << number << " ";
		number--;
	}
	cout << endl;
	return 0;
}