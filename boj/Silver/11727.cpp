#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int D[1001];
    D[1] = 1; D[2] = 3;
    for (int i = 3; i <= N; i++) {
        D[i] = (D[i - 1] + (D[i - 2] * 2)) % 10007;
    }
    cout << D[N] << "\n";

    return 0;
}