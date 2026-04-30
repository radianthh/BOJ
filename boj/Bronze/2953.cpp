#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int b[5][4];
    int sum[5] = {0};
    int sum1[5] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> b[i][j];
            sum[i] += b[i][j];
            sum1[i] += b[i][j];
        }
    }

    sort(sum1, sum1 + 5);
    for (int k = 0; k < 5; k++) {
        if(sum[k] == sum1[4]) {
            cout << k + 1 << " " << sum[k] << "\n";
            return 0;
        }
    }
    return 0;
}