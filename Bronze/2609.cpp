#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int z;
    for (int i = 1; i <= min(x, y); i++) {
        if(x % i == 0 && y % i == 0) {
            z = i;
        }
    }

    cout << z << "\n";
    cout << z * (x / z) * (y / z) << "\n";

    return 0;
}