#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    while(m--) {
        sort(v.begin(), v.end());
        long long t = v[0] + v[1];
        v[0] = v[1] = t;
    }
    long long sum = 0;
    for (auto a : v) {
        sum += a;
    }
    cout << sum << "\n";

    return 0;
}