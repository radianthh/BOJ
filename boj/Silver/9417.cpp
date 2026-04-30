#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

long long gcd(long long x1, long long x2) {
    long long mx = max(x1, x2);
    long long mn = min(x1, x2);
    long long x = mx;
    long long y = mn;

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

    int n;
    cin >> n;
    cin.ignore();

    long long x;
    string s;
    for (int i = 0; i < n; i++) {
        long long m = 0;
        getline(cin, s);
        stringstream ss(s);

        vector<long long> v;
        while(ss >> x) {
            v.emplace_back(x);
        }

        for (size_t j = 0; j < v.size(); j++) {
            for (size_t k = j + 1; k < v.size(); k++) {
                m = max(m, gcd(v[j], v[k]));
            }
        }
        cout << m << "\n";
    }

    return 0;
}