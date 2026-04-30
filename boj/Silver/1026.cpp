#include <iostream>
#include <algorithm>

bool cmp(int &x, int &y) {
    return x > y;
}

using namespace std;

int main() {

    int N;
    cin >> N;

    int A[51], B[51];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int j = 0; j < N; j++) {
        cin >> B[j];
    }

    sort(A, A + N);
    sort(B, B + N, cmp);

    int sum = 0;
    for (int k = 0; k < N; k++) {
        sum += A[k] * B[k];
    }
    cout << sum << "\n";

    return 0;
}