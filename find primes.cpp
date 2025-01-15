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
    if (n%2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0) return false;
    }
    return true;
}