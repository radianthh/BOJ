#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int A[10];
        for (int j = 0; j < 10; j++) {
            cin >> A[j];
        }
        sort(A, A + 10);
        cout << A[7] << "\n";
    }

    return 0;
}