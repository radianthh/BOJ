#include <iostream>

using namespace std;

int gcd(int x, int y) {
    int mx = max(x, y);
    int mn = min(x, y);
    x = mx;
    y = mn;

    while(y != 0) {
        int t = x % y;
        x = y;
        y = t;
    }
    return x;
}

int main() {

    int T;
    cin >> T;

    int A, B;
    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << (A * B) / gcd(A, B) << "\n";
    }

    return 0;
}