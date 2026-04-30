#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int S[301];
    int D[301];
    int tot = 0;
    for (int i = 1; i <= N; i++) {
        cin >> S[i];
        tot += S[i];
    }

    D[1] = S[1]; D[2] = S[2]; D[3] = S[3];
    for (int i = 4; i <= N; i++) {
        D[i] = min(D[i - 2], D[i - 3]) + S[i];
    }

    cout << tot - min(D[N - 1], D[N - 2]) << "\n";

    return 0;
}