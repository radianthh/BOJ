#include <iostream>
#include <algorithm>
#include <vector>
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

    vector<int> v;
    int x;
    while(cin >> x) {
        v.emplace_back(x);
    }

    int z = 0;
    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = i + 1; j < v.size(); j++) {
            z = max(z, gcd(v[i], v[j]));
        }
    }
    cout << z << "\n";

    return 0;
}