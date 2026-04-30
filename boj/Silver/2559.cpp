#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    int v[100001];
    int suf[100001];

    int mx = -1000;
    int sum = 0;
    for(int i = 1; i <= N; i++) {
        cin >> v[i];
    }

    suf[0] = 0;
    suf[1] = v[0];
    for(int i = 1; i <= N; i++) {
        suf[i] = suf[i - 1] + v[i];
    }
    for (int j = K; j <= N; j++) {
        sum = suf[j] - suf[j - K];
        mx = max(sum, mx);
        sum = 0;
    }
    cout << mx << "\n";

    return 0;
}