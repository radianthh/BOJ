#include <iostream>
#include <cmath>
using namespace std;

int is_prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;

    for (int i = M; i <= N; i++) {
        if(i == 1) continue;
        if(is_prime(i) == 1) cout << i << "\n";
    }

    return 0;
}