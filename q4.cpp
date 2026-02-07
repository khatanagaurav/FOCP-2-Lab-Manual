#include <iostream>
using namespace std;

int main()
{
    int f, c, r;

    cout << "Enter 0 for F to C, 1 for C to F: ";
    cin >> r;

    if (r == 0)
    {
        cout << "Enter degree in Fahrenheit: ";
        cin >> f;
        cout << "Degree in centigrade = " << (f - 32) * 5.0 / 9;
    }
    else if (r == 1)
    {
        cout << "Enter degree in Centigrade: ";
        cin >> c;
        cout << "Degree in fahrenheit = " << (c * 9.0 / 5) + 32;
    }

    return 0;
}
