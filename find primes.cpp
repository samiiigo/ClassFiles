#include <iostream>
#include <cmath>
using namespace std;

int getNum();
void display(int n, bool a);
bool isPrime(int n);
bool isRTPrime(int n);
bool isLTPrime(int n);

int main() {
    int x = getNum();
    display(x,isPrime(x));
    return 0;
}

int getNum() {
    int n;
    cin >> n;
    return n;
}

void display(int n, bool a) {
    cout << n << " is " << (a ? "prime" : "not prime") << endl;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n%2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isRTPrime(int n) {
    return isPrime(n) ? isRTPrime(n/=10) : n==0;
}

bool isLTPrime(int n) {
    return isPrime(n) ? isRTPrime(n/=10) : n==0;
}