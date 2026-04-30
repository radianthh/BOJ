#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y) {
    while(y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    int M, N, x, y;
    for (int i = 0; i < T; i++) {
        bool istrue = false;
        cin >> M >> N >> x >> y;
        if(x == M) x = 0;
        if(y == N) y = 0;

        int lcm = (M / gcd(M, N)) * N;
        for (int j = x; j <= lcm; j += M) {
            if(j == 0) continue;
            if(j % N == y) {
                cout << j << "\n";
                istrue = true;
                break;
            }
        }
        if(!istrue) cout << -1 << "\n";
    }

    return 0;
}