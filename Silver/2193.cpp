#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    vector<pair<long long, long long>> v(91);
    v[1] = {1, 0}; v[2] = {1, 0};
    for (long long i = 3; i <= N; i++) {
        v[i].first = v[i - 1].second;
        v[i].second = v[i - 1].first + v[i - 1].second;
    }
    cout << v[N].first * 1 + v[N].second * 2 << "\n"; 

    return 0;
}