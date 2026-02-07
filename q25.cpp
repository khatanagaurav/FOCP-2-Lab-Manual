#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cctype>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

void getPrimes(int start, int end) {
    for (int i = start; i <= end; i++)
        if (isPrime(i)) cout << i << " ";
    cout << endl;
}

bool isValidPassword(string p) {
    if (p.length() < 8) return false;
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "@#$%!&*";
    for (char c : p) {
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        else if (specialChars.find(c) != string::npos) hasSpecial = true;
    }
    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    int start = 10, end = 50;
    cout << "Primes: ";
    getPrimes(start, end);

    string pass = "Secure@123";
    if (isValidPassword(pass)) cout << "Password Valid" << endl;
    else cout << "Password Invalid" << endl;

    return 0;
}
