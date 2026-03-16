#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N;
    int A[100001];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N);
    cin >> M;
    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        cout << binary_search(A, A + N, input) << "\n";
    }

    return 0;
}
