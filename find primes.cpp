#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n);

int main() {
    int n;
    cin >> n;

    cout << n << " is " << checkPrime(n) ? "prime" : "not prime" << endl;
}

bool checkPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}