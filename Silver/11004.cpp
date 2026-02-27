#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N, K;
    cin >> N >> K;

    vector<long long> v;
    long long a;

    for (int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    cout << v[K - 1] << "\n";

    return 0;
}