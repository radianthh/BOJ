#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int S[301];
    int D[301][3];
    for (int i = 1; i <= N; i++) {
        cin >> S[i];
    }

    D[1][1] = S[1]; D[1][2] = 0;
    D[2][1] = S[2]; D[2][2] = S[1] + S[2];
    for (int i = 3; i <= N; i++) {
        D[i][1] = max(D[i - 2][1], D[i - 2][2]) + S[i];
        D[i][2] = D[i - 1][1] + S[i];
    }

    cout << max(D[N][1], D[N][2]) << "\n";

    return 0;
}