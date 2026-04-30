#include <iostream>
#include <algorithm>
using namespace std;

int A[100001];
int sum[100001];
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, S;
    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sum[0] = A[0];
    for (int i = 1; i < N; i++) {
        sum[i] = sum[i - 1] + A[i];
    }

    int st = 0;
    int en = 0;
    int sum_s;
    int cnt = 100001;
    bool isTrue = false;
    while(st <= en && en < N) {
        sum_s = 0;
        for(int i = st; i <= en; i++) {
            sum_s = sum[en] - sum[st - 1];
        }
        if(sum_s == S) {
            cnt = min(cnt, en - st + 1);
            st++; en++;
            isTrue = true;
        } else if(sum_s > S) {
            cnt = min(cnt, en - st + 1);
            st++;
            isTrue = true;
        } else en++;
    }
    if(isTrue) cout << cnt << "\n";
    else cout << 0 << "\n";

    return 0;
}