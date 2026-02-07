#include <iostream>

using namespace std;

int main() {
    double prices[10];
    double maxPrice;

    for (int i = 0; i < 10; i++) {
        cout << "Enter price for item " << (i + 1) << ": ";
        cin >> prices[i];
    }

    maxPrice = prices[0];
    for (int i = 1; i < 10; i++) {
        if (prices[i] > maxPrice) {
            maxPrice = prices[i];
        }
    }

    cout << "The maximum price is: " << maxPrice << endl;

    return 0;
}
