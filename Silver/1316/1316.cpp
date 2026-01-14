#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    char colon;
    cin >> n >> colon >> m;

    int k = min(n, m);
    int result = 0;
    for (int i = 1; i <= k; i++) {
        if(n % i == 0 && m % i == 0) {
            result = i;
        }
    }
    cout << n / result << ":" << m / result << "\n";

    return 0;
}