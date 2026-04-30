#include <iostream>
using namespace std;

int main() {

    int x, y;

    cin >> x >> y;

    int z, w;
    int a[2][7] = {0, 0, 0, 0, 0, 0, 0,
                   0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < x; i++) {
        cin >> z >> w;
        a[z][w]++;
    }

    int cnt = 0;
    for(int i = 0; i <= 1; i++) {
        for(int j = 1; j <= 6; j++) {
            if(a[i][j] != 0 && a[i][j] <= y) {
                cnt++;
            } else if(a[i][j] > y && a[i][j] % y == 0) {
                cnt += (a[i][j] / y);
            } else if(a[i][j] > y && a[i][j] % y != 0){
                cnt += ((a[i][j] / y) + 1);
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}