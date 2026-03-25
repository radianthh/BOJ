#include <iostream>
using namespace std;

int D[32];
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    // 빈 공간 3 x 0 채우는 방법 : 아무것도 안하는 것 1개
    D[0] = 1; D[2] = 3; D[4] = 11;
    for (int i = 6; i <= N; i += 2) {
        D[i] = D[i - 2] * 3;
        for (int j = 4; j <= i; j += 2) {
            D[i] += (2 * D[i - j]);
        }
    }
    cout << D[N] << "\n";

    return 0;
}