#include <iostream>
using namespace std;

int zero[41];
int one[41];
void fibonacci(int n) {
    zero[0] = 1; one[0] = 0;
    zero[1] = 0; one[1] = 1;
    for (int i = 2; i <= n; i++) {
        zero[i] = zero[i - 1] + zero[i - 2];
        one[i] = one[i - 1] + one[i - 2];
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        fibonacci(x);
        cout << zero[x] << " " << one[x] << "\n";
    }    

    return 0;
}