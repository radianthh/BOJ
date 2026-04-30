#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> &v1, pair<int, int> &v2) {
    if(v1.first != v2.first) return v1.first < v2.first;
    return v1.second < v2.second;
}

int main() {

    int N;
    cin >> N;

    int x[100001], y[100001];
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        v.emplace_back(x[i], y[i]);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto c : v) {
        cout << c.first << " " << c.second << "\n";
    }

    return 0;
}