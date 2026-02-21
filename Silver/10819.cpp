#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v;
    int a;
    for (int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int mx = -201;
    do {
        int sum = 0;
        for (int i = 0; i < N - 1; i++) {
            sum += abs(v[i] - v[i + 1]);
        }
        mx = max(mx, sum);
    } while(next_permutation(v.begin(), v.end()));

    cout << mx << "\n";

    return 0;
}