#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	int num, guess;
	num = rand() % 100 + 1;

	cout << " Guess a Number (1-100): ";
do {
	cin >> guess;
	if (guess < num) cout << "Too Low!\n";
	else if (guess > num) cout << "Too High!\n";
}	while (guess != num);
	cout << "You got it!\n";
}