#include <iostream>

using namespace std;

int main() {
    float marks[5], total = 0, percentage;

    cout << "Enter marks for 5 subjects: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / 500) * 100;

    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
