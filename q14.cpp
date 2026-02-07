#include <iostream>
using namespace std;

int main()
{
    int ch, s, a, m, d, n1, n2;

    do
    {
        cout << "Enter 2 numbers to be used for basic arithmetic operations: ";
        cin >> n1 >> n2;

        cout << "ENter choice \n1) SUBTRACT\n2) ADD\n3) MULTIPLY\n4) DIVISION\n5) EXIT\n";
        cin >> ch;

        if (ch == 1)
        {
            if (n2 > n1)
            {
                s = n2 - n1;
                cout << "Subtraction = " << s;
            }
            else if (n1 > n2)
            {
                s = n1 - n2;
                cout << "Subtraction = " << s;
            }
        }
        if (ch == 2)
        {
            a = n1 + n2;
            cout << "Addition = " << a;
        }
        if (ch == 3)
        {
            m = n1 * n2;
            cout << "Multiplication = " << m;
        }
        if (ch == 4)
        {
            d = n1 / n2;
            cout << "Division = " << d;
        }

    } while (ch != 5);

    return 0;
}
