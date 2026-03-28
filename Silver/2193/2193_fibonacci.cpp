#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    long long D[91];
    D[1] = 1; D[2] = 1;
    for (int i = 3; i <= N; i++) {
        D[i] = D[i - 1] + D[i - 2];
    }

    cout << D[N] << "\n";

    return 0;
}