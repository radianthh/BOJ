#include <iostream>
using namespace std;

int D[1002][1002];
const int mod = 10007;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    for (int i = 1; i <= 1000; i++) {
        D[i][i] = 1; D[i][0] = 1;
        for (int j = 1; j < i; j++) {
            D[i][j] = (D[i - 1][j] + D[i - 1][j - 1]) % mod;
        }
    }
    cout << D[N][K] << "\n";

    return 0;
}