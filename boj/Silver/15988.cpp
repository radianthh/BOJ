#include <iostream>

using namespace std;

long long D[1000001];

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    D[1] = 1; D[2] = 2; D[3] = 4;
    for (int i = 4; i <= 1000000; i++) {
        D[i] = (D[i - 1] + D[i - 2] + D[i - 3]) % 1000000009;
    }


    for (int i = 0; i < T; i++) {
        int a;
        cin >> a;
        cout << D[a] << "\n";
    }


    return 0;
}