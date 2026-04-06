#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> v1(N);
    vector<long long> v2;

    for (int i = 0; i < N; i++) {
        cin >> v1[i];
        v2.push_back(v1[i]);
    }
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    for (int i = 0; i < N; i++) {
        cout << lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin() << " ";
    }

    return 0;
}