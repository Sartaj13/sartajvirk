#include <iostream>
#include <string>
using namespace std;

void main() {
    char vovals[5] = { 'a', 'e', 'i', 'o', 'u' };
    string vovals;
    cout << "Enter a word or sentence: ";
    cin >> vovals;

    for (int i = 0; i < 5; i++) {
        cout << vovals[i];
        cout << "everytime add p and vovals when i ask you any word";
    


    }
    exit(0);
}
