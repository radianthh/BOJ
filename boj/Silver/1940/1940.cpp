#include <iostream>
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

    int st = 0;
    int en = N - 1;
    int cnt = 0;
    while(st != en) {
        if(A[st] + A[en] == M) cnt++;
        if(en != st + 1) en--;
        else {
            st++;
            en = N - 1;
        }
    }
    cout << cnt << "\n";

    return 0;
}