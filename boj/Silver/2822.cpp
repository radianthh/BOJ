#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x1, int x2) {
    return x1 > x2;
}

int main() {

    int x[8], y[8], c[5];
    for (int i = 0; i < 8; i++) {
        cin >> x[i];
        y[i] = x[i];
    }

    sort(y, y + 8, cmp);

    int sum = 0;
    for (int j = 0; j < 5; j++) {
        for (int k = 0; k < 8; k++) {
            if(y[j] == x[k]) {
                c[j] = k;
            }
        }
        sum += y[j];
    }
    sort(c, c + 5);

    cout << sum << "\n";

    for(auto a : c) {
        cout << a + 1 << " ";
    }

    return 0;
}