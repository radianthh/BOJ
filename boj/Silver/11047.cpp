#include <iostream>

using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int a[11];
    for (int i = 0; i < N; i++) {
        cin >> a[i]; 
    }
    int cnt = 0;
    for (int i = N - 1; i >= 0; i--) {
        cnt += K / a[i];
        K %= a[i];
    }
    cout << cnt << "\n";

    return 0;
}