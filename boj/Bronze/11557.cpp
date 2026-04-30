#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> &p1, pair<string, int> &p2) {
    return p1.second > p2.second;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int x;
    string s;
    int l;
    for (int i = 0; i < N; i++) {
        cin >> x;
        vector<pair<string, int>> v;
        for (int j = 0; j < x; j++) {
            cin >> s >> l;
            v.emplace_back(s, l);
        }
        sort(v.begin(), v.end(), cmp);
        for (auto a : v) {
            cout << a.first << "\n";
            break;
        }
    }


    return 0;
}