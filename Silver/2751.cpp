#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int N;
    cin >> N;

    int x[1000001];
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    sort(x, x + N);

    cout << x[0] << "\n";
    for (int i = 1; i < N; i++) {
        if(x[i] != x[i - 1]) {
            cout << x[i] << "\n";
        }
    }
    cout << "\n";

    return 0;
}