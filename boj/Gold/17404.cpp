#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int R[1001], G[1001], B[1001];
    int D[1001][3];
    int sum[3] = {0};
    for (int i = 1; i <= N; i++) {
        cin >> R[i] >> G[i] >> B[i];
    }

    for (int i = 0; i < 3; i++) {
        D[1][0] = D[1][1] = D[1][2] = 1000001;
        if(i == 0) D[1][0] = R[1];
        else if(i == 1) D[1][1] = G[1];
        else if(i == 2) D[1][2] = B[1];
        for (int j = 2; j <= N; j++) {
            D[j][0] = min(D[j - 1][1], D[j - 1][2]) + R[j];
            D[j][1] = min(D[j - 1][0], D[j - 1][2]) + G[j];
            D[j][2] = min(D[j - 1][0], D[j - 1][1]) + B[j];   
        }
        int mn = 1000001;
        for (int k = 0; k < 3; k++) {
            if(i == k) continue;
            mn = min(mn, D[N][k]);
        }
        sum[i] = mn;
    }

    cout << min({sum[0], sum[1], sum[2]}) << "\n";

    return 0;

}