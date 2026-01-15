#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int N;
    cin >> N;

    int x[100001] = {0};
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    sort(x, x + N);
    cout << x[0] << " ";
    for (int j = 1; j < N; j++) {
        if(x[j] != x[j - 1]) cout << x[j] << " ";
    }

    return 0;
}