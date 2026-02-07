#include <iostream>

int main() {
    const int days = 30;
    int temperatures[days];
    int minimumTemperature;

    for (int i = 0; i < days; i++) {
        std::cout << "Enter temperature for day " << i + 1 << ": ";
        std::cin >> temperatures[i];
    }

    minimumTemperature = temperatures[0];

    for (int i = 1; i < days; i++) {
        if (temperatures[i] < minimumTemperature) {
            minimumTemperature = temperatures[i];
        }
    }

    std::cout << "Minimum temperature for the month: " << minimumTemperature << std::endl;

    return 0;
}
