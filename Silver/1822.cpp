#include <iostream>
#include <algorithm>
using namespace std;

long long A[500002];
long long B[500002];
int cnt = 0;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n_A, n_B;
    cin >> n_A >> n_B;

    for (int i = 0; i < n_A; i++) {
        cin >> A[i];
    }
    sort(A, A + n_A);
    while(n_B--) {
        int input;
        cin >> input;
        if(binary_search(A, A + n_A, input)) {
            B[cnt] = input;
            cnt++;
        }
    }
    sort(B, B + cnt);
    cout << n_A - cnt << "\n";
    for (int i = 0; i < n_A; i++) {
        if(!binary_search(B, B + cnt, A[i])) cout << A[i] << " ";
    }
    cout << "\n";

    return 0;
}