#include <iostream>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}

int
main() {
    cout << "Number | Prime" << endl;
    cout << "------|------" << endl;

    for (int i = 30; i >= 1; i--) {
        bool prime = is_prime(i);
        cout << i << " | " << (prime ? "Yes" : "No") << endl;
    }

    return 0;
}