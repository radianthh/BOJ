#include <iostream>
using namespace std;

long long gcd(long long x, long long y) {
    long long mx = max(x, y);
    long long mn = min(x, y);
    x = mx;
    y = mn;

    while(y != 0) {
        long long t = x % y;
        x = y;
        y = t;
    }
    return x;
}

int main() {

    long long A, B;
    cin >> A >> B;

    cout << (A * B) / gcd(A, B) << "\n";

    return 0;
}