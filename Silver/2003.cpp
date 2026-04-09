#include <iostream>
using namespace std;

int A[10001];
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int st = 0; int en = 0;
    int sum = 0; int cnt = 0;
    while(true) {
        if(sum == M) {
            cnt++;
            sum -= A[st++];
        } else if(sum > M) {
            sum -= A[st++];
        } else if(en == N) break;
        else {
            sum += A[en++];
        } 
    }
    cout << cnt << "\n";

    return 0;
}