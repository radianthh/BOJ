#include <iostream>
#include <algorithm>
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

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int x, y;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        cout << gcd(x, y) << "\n";
    }


    return 0;
}