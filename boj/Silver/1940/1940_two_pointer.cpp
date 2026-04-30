#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int A[15001];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
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
    cout << cnt << "\n";

    return 0;
}