#include <iostream>
#include <algorithm>
using namespace std;

int A[500001];
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N);

    cin >> M;
    while(M--) {
        int input;
        cin >> input;
        cout << binary_search(A, A + N, input) << " "; 
    }

    return 0;
}