#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x, y;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        cout << x + y << "\n";
    }


    return 0;
}