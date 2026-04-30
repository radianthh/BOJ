#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

int x[1000001];
int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    sort(x, x + N, cmp);

    for (int i = 0; i < N; i++) {
        cout << x[i] << "\n";
    }
    return 0;
}