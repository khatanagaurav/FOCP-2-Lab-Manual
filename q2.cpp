#include <iostream>
using namespace std;

int main()
{
    int Student1, Student2, Student3;
    cout << "\n ENTER Student 1 MARKS: ";
    cin >> Student1;
    cout << "\n ENTER Student 2 MARKS: ";
    cin >> Student2;
    cout << "\n ENTER Student 3 MARKS: ";
    cin >> Student3;

    cout << "\n Student 1 MARKS: " << Student1 << "\n Student 2 MARKS: " << Student2 << "\n Student 3 MARKS: " << Student3 << "\n AVG MARKS: " << (Student1 + Student2 + Student3) / 2;
    return 0;
}

