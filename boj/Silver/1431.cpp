#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, pair<size_t, int>> &v1, pair<string, pair<size_t, int>> &v2) {
    if(v1.second.first != v2.second.first) return v1.second.first < v2.second.first;
    if(v1.second.second != v2.second.second) return v1.second.second < v2.second.second;
    return v1.first < v2.first;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<string, pair<size_t, int>>> v;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        size_t l = s.length();
        int sum = 0;
        for (size_t j = 0; j < l; j++) {
            if(s[j] >= 48 && s[j] <= 57) {
                sum += s[j] - 48;
            }
        }
        v.push_back({s, {l, sum}});
    }

    sort(v.begin(), v.end(), cmp);

    for (auto a : v) {
        cout << a.first << "\n";
    }

    return 0;
}