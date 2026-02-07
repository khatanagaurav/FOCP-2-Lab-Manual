#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    double salaries[10];
    double totalSalary = 0.0;
    double averageSalary;

    for (int i = 0; i < 10; ++i) {
        cout << "Enter salary for employee " << i + 1 << ": ";
        cin >> salaries[i];
        totalSalary += salaries[i];
    }

    averageSalary = totalSalary / 10;

    cout << "-----------------------" << endl;
    cout << "Total Salary: " << totalSalary << endl;
    cout << "Average Salary: " << averageSalary << endl;

    return 0;
}
