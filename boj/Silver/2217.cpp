#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    int mx = 0;
    for (int i = 0; i < N; i++) {
        mx = max(mx, v[i] * (N - i));
    }
    cout << mx << "\n";

    return 0;
}