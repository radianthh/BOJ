#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, N, M;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int A[20002];
        cin >> N >> M;
        for (int j = 0; j < N; j++) {
            cin >> A[j];
        }
        sort(A, A + N);
        int st = 0;
        int en = N - 1;
        int cnt = 0;
        while(st < en) {
            int sum = A[st] + A[en];
            if(sum == M) {
                cnt++;
                st++;
                en--;
            } else if(sum < M) st++;
            else en--;
        }
        cout << "Case #" << i + 1 << ": " << cnt << "\n";
    }
    return 0;
}