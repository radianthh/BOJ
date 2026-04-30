#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int is_prime[1001] = {0};
    is_prime[1] = 1;
    int cnt = 0;
    int k[1001] = {0};
    for (int i = 2; i <= N; i++) {
        if(is_prime[i] != 0) continue;
        for (int j = i; j <= N; j += i) {
            if(!is_prime[j]) {
                cnt++;
                is_prime[j] = 1;
                k[cnt] = j;
            }
        }
    }
    cout << k[K] << "\n";

    return 0;
}