#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> &p1, pair<string, int> &p2) {
    if(p1.second != p2.second) return p1.second > p2.second;
    else return p1.first < p2.first;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string s;
    map<string, int> m;
    for (int i = 0; i < N; i++) {
        cin >> s;
        m[s]++;
    }

    vector<pair<string, int>> v;
    for (auto a : m) {
        v.emplace_back(a);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto c : v) {
        cout << c.first << "\n";
        break;
    }

    return 0;
}