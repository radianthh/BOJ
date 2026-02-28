#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(pair<string, tuple<int, int, int>> &p1, pair<string, tuple<int, int, int>> &p2) {
    if(get<2>(p1.second) != get<2>(p2.second)) return get<2>(p1.second) > get<2>(p2.second);
    if(get<1>(p1.second) != get<1>(p2.second)) return get<1>(p1.second) > get<1>(p2.second);
    if(get<0>(p1.second) != get<0>(p2.second)) return get<0>(p1.second) > get<0>(p2.second);
    return false;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string s;
    int d, m, y;
    vector<pair<string, tuple<int, int, int>>> v;
    for (int i = 0; i < N; i++) {
        cin >> s >> d >> m >> y;
        v.push_back({s, make_tuple(d, m, y)});
    }

    sort(v.begin(), v.end(), cmp);
    cout << v[0].first << "\n" << v[N - 1].first << "\n";
    
    return 0;
}