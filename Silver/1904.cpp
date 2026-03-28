#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    long long D[1000001];
    D[1] = 1; D[2] = 2;
    for (int i = 3; i <= N; i++) {
        D[i] = (D[i - 1] + D[i - 2]) % 15746;
    }

    cout << D[N] << "\n";

    return 0;
}