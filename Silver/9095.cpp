#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    int D[11];
    D[1] = 1; D[2] = 2; D[3] = 4;

    for (int i = 4; i <= 10; i++) {
        D[i] = D[i - 3] + D[i - 2] + D[i - 1];
    }
    for (int i = 0; i < T; i++) {
        int x;
        cin >> x;
        cout << D[x] << "\n";
    }

    return 0;
}