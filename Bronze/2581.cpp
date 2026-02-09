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

    int sum = 0;
    int a[10001];
    int k = 0;
    for (int i = M; i <= N; i++) {
        if(i == 1) continue;
        if(is_prime(i)) {
            a[k] = i;
            sum += i;
            k++;
        }
    }
    if(k == 0) {
        cout << -1 << "\n";
        return 0;
    }
    cout << sum << "\n" << a[0] << "\n";

    return 0;
}