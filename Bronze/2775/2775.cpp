#include <iostream>

using namespace std;

int a[1000][14];
int main() {
    
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 14; j++) {
            a[0][j] = j + 1;
            for (int k = 0; k <= j; k++) {
                a[i][j] += a[i - 1][k];
            }
        }
    }

    int N;
    cin >> N;

    int x, y;
    for (int n = 0; n < N; n++) {
        cin >> x >> y;
        cout << a[x][y-1] << "\n";
    }

    return 0;
}