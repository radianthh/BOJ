#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int D[31][31];
    for (int i = 1; i <= 30; i++) {
        D[i][i] = 1; 
        D[i][1] = 1;
    }

    for (int i = 3; i <= 30; i++) {
        for (int j = 2; j < i; j++) {
            D[i][j] = D[i - 1][j - 1] + D[i - 1][j];
        }
    }

    cout << D[n][k] << "\n";

    return 0;
}