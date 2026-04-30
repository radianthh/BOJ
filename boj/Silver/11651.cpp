#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int> &v1, pair<int, int> &v2) {
    if(v1.second != v2.second) {
        return v1.second < v2.second;
    } else {
        return v1.first < v2.first;
    }
}

int main() {

    int N;
    cin >> N;

    int x[100001];
    int y[100001];
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        v.emplace_back(make_pair(x[i], y[i]));
    }

    sort(v.begin(), v.end(), cmp);

    for (auto a : v) {
        cout << a.first << " " << a.second << "\n";
    }


    return 0;
}

