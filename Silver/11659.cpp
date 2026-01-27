#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;

    cin >> N >> M;

    int x;
    long long p_sum[100001] = {0};
    for (int i = 0; i < N; i++) {
        cin >> x;
        p_sum[i + 1] = p_sum[i] + x;
    }

    int y, z;
    for (int j = 0; j < M; j++) {
        cin >> y >> z;
        cout << p_sum[z] - p_sum[y - 1] << "\n";
    }
    
    return 0;
}