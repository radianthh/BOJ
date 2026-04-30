#include <iostream>
using namespace std;

int K, N;
int a[100005];
bool solve(long long line) {
    long long cnt = 0;
    for (int i = 0; i < K; i++) cnt += a[i] / line;
    return cnt >= N;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> K >> N;

    for (int i = 0; i < K; i++) {
        cin >> a[i];
    }
    long long st = 0;
    long long en = 0x7fffffff;
    while(st < en) {
        long long mid = (st + en + 1) / 2;
        if(solve(mid)) st = mid;
        else en = mid - 1;
    }
    cout << st << "\n";

    return 0;
}