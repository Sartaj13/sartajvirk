#include <iostream>
#include <vector>

using namespace std;
vector<int> countdown_odd(int n) {
    vector<int> countdown_list;
    for (int i = n; i >= 1; --i) {  
        if (i % 2 != 0) { 
            countdown_list.push_back(i);  
        }
    }
    return countdown_list;
}

int main() {
    int number;
    do {
        cout << "Enter a number less than 100: ";
        cin >> number;
        if (number >= 100) {
            cout << "The number must be less than 100. Try again." << endl;
        }
    } while (number >= 100);
    vector<int> result = countdown_odd(number);
    cout << "The countdown with odd numbers from " << number << " to 1 is: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
 
       
 