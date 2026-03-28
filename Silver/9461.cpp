#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long P[101];    
    P[1] = 1; P[2] = 1; P[3] = 1;

    int T;
    cin >> T;

    for (int i = 4; i <= 100; i++) {
            P[i] = P[i - 3] + P[i - 2];
    }

    while(T--) {
        int N;
        cin >> N;
        cout << P[N] << "\n";
    }

    return 0;
}