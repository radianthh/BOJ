#include <iostream>
#include <algorithm>
using namespace std;

long long lcm(long long &x, long long &y) {
    long long m = min(x, y);
    long long l = 1;
    for (long long i = 1; i <= m; i++) {
        if(x % i == 0 && y % i == 0) {
            l = i;
        }
    }
    return l * (x / l) * (y / l);
}

int main() {

    int N;
    cin >> N;

    long long x, y;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        cout << lcm(x, y) << "\n";
    }

    return 0;
}