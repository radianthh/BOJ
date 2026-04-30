#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    long long D[82];
    D[1] = 1; D[2] = 1;
    for (int i = 3; i <= 80; i++) {
        D[i] = D[i - 1] + D[i - 2];
    }
    
    long long sum[82];
    sum[1] = 1;
    for (int i = 2; i <= N; i++) {
        sum[i] = sum[i - 1] + D[i]; 
    }
    cout << 2 * sum[N] + 2 << "\n";

    return 0;
}