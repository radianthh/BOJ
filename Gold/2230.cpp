#include <iostream>
#include <algorithm>
using namespace std;

int A[100001];
int main() {

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N);

    int st = 0;
    int en = 0;
    int mn = 0x7fffffff;
    while(en < N) {
        if(A[en] - A[st] >= M) {
            mn = min(mn, A[en] - A[st]);
            st++;
        } else en++;
    }
    cout << mn << "\n";

    return 0;
}