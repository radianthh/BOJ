#include <iostream>

using namespace std;

int main() {

    int x, y;
    cin >> x >> y;

    if(x == 0) x = 24;
    int m = x * 60 + y;
    int update = m - 45;

    int H = update / 60;
    int M = update % 60;

    if(H == 24) {
        cout << 0 << " " << M << "\n";
    } else {
        cout << H << " " << M << "\n";
    }

    return 0;
}