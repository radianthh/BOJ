#include <iostream>
using namespace std;

int A[1000001]; int B[1000001]; int C[2000002];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    int Aidx = 0;
    int Bidx = 0;

    for (int i = 0; i < N + M; i++) {
        if(Aidx == N) C[i] = B[Bidx++];
        else if (Bidx == M) C[i] = A[Aidx++];
        else if (A[Aidx] <= B[Bidx]) C[i] = A[Aidx++];
        else C[i] = B[Bidx++];
    }

    for (int i = 0; i < N + M; i++) {
        cout << C[i] << " ";
    }
    cout << "\n";

    return 0;
}