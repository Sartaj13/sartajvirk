#include <iostream>
#include <string>
#include <locale.h>

void main() {

	using namespace std;
	int i;
	string names[5];
	char answer = 's';
	do {
		for (i = 0; i < 5; i++)
		{
			cout << "Tell me a name" << i + 1 << "º name";
			cin >> names[i];
		}

		for (i = 4; i >= 0; i--)
		{
			cout<< names[i];
		}
		cout << "Do you want to continue?(y/n)";
		cin >> answer;
	} while (answer=='y');
}