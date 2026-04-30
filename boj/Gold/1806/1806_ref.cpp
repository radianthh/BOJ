#include <iostream>
#include <algorithm>
using namespace std;

int A[100001];
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, S;
    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int st = 0;
    int en = 0;
    int sum = 0;
    int cnt = 100001;
    bool isTrue = false;
    while(true) {
        if(sum >= S) {
            cnt = min(cnt, en - st);
            sum -= A[st++];
            isTrue = true;
        } else if(en == N) break;
        else {
            sum += A[en++];
        }
    }
    if(isTrue) cout << cnt << "\n";
    else cout << 0 << "\n";

    return 0;
}