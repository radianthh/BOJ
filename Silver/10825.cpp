#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, tuple<int, int, int>> v1, pair<string, tuple<int, int, int>> v2) {
    if(get<0>(v1.second) != get<0>(v2.second)) return get<0>(v1.second) > get<0>(v2.second);
    if(get<1>(v1.second) != get<1>(v2.second)) return get<1>(v1.second) < get<1>(v2.second);
    if(get<2>(v1.second) != get<2>(v2.second)) return get<2>(v1.second) > get<2>(v2.second);
    return v1.first < v2.first;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string s;
    int x, y, z;
    vector<pair<string, tuple<int, int, int>>> v;
    for (int i = 0; i < N; i++) {
        cin >> s >> x >> y >> z;
        v.push_back({s, make_tuple(x, y, z)});
    }

    sort(v.begin(), v.end(), cmp);

    for (auto a : v) {
        cout << a.first << "\n";
    }

    return 0;
}