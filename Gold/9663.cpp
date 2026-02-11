#include <iostream>

using namespace std;
int N;
int cnt = 0;
bool isused1[40];
bool isused2[40];
bool isused3[40];

void func(int x) {
    if(x == N) {
        cnt++;
        return;
    }
    for (int y = 0; y < N; y++) {
        if(isused1[y] || isused2[x + y] || isused3[x - y + N - 1]) continue;
        isused1[y] = 1;
        isused2[x + y] = 1;
        isused3[x - y + N - 1] = 1;

        func(x + 1);
        isused1[y] = 0;
        isused2[x + y] = 0;
        isused3[x - y + N - 1] = 0;
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    func(0);
    cout << cnt << "\n";

    return 0;
}