#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<long long, long long> &p1, pair<long long, long long> &p2) {
    if(p1.second != p2.second) return p1.second > p2.second;
    else return p1.first < p2.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<long long, long long> m;

    int N;
    cin >> N;

    long long y;
    for (int i = 0; i < N; i++) {
        cin >> y;
        m[y]++;
    }

    vector<pair<long long, long long>> v;
    for (auto &a : m) {
        v.emplace_back(a);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto b : v) {
        cout << b.first << "\n";
        break;
    }

    return 0;
}