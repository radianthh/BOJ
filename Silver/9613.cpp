#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long x, long long y) {
    long long m1 = max(x, y);
    long long m2 = min(x, y);
    x = m1;
    y = m2;

    while(y != 0) {
        long long t = x % y;
        x = y;
        y = t;
    }
    return x;
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int n;
    long long sum;

    for (int i = 0; i < t; i++) {
        long long x[101];
        cin >> n;
        for (long long j = 0; j < n; j++) {
            cin >> x[j];
        }
        sum = 0;
       
        for (long long k = 0; k < n; k++) {
            for (long long e = k + 1; e < n; e++) {
                sum += gcd(x[k], x[e]);
            }
        }
        cout << sum << "\n";
    }

    return 0;
}