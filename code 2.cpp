#include<iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> ages(30);
	vector<float> heights(30);

    for (int i = 0; i < 30; i++) {
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> ages[i];
        cout << "Enter height of student " << i + 1 << " (in meters): ";
        cin >> heights[i];
        float totalHeight = 0;
        for (int i = 0; i < 30; i++) {
            totalHeight += heights[i];
        }
        float averageHeight = totalHeight / 30;
        int count = 0;
        for (int i = 0; i < 30; i++) {
            if (ages[i] > 13 && heights[i] < averageHeight) {
                count++;
            }
        } cout << "Number of students older than 13 with height less than the average: " << count << endl;

        return 0;
    }
}