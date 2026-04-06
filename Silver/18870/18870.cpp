#include <iostream>
#include <algorithm>
using namespace std;

long long A[1000001];
long long B[1000001];
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        B[i] = A[i];
    }
    sort(A, A + N);
    long long len = unique(A, A + N) - A;
    for (int i = 0; i < N; i++) {
        cout << lower_bound(A, A + len, B[i]) - A << " ";
    }

    return 0;
}