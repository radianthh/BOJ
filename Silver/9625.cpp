#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K;
    cin >> K;

    vector<pair<int, int>> v(46);
    v[0].first = 0; v[0].second = 1;
    v[1].first = 0; v[1].second = 1;
    for (int i = 2; i <= 45; i++) {
        v[i].first = v[i - 1].second;
        v[i].second = v[i - 1].first + v[i - 1].second;
    }

    cout << v[K].first << " " << v[K].second << "\n";

    return 0;
}