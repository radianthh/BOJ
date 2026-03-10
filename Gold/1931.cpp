#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> &p1, pair<int, int> &p2) {
    if(p1.second != p2.second) return p1.second < p2.second;
    else return p1.first < p2.first;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);

    int t = 0;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if(v[i].first >= t) {
            t = v[i].second;
            cnt++;
        }
    }
    cout << cnt << "\n";

    return 0;
}