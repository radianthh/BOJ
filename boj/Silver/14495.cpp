#include <iostream>

using namespace std;

unsigned long long fibonacci(long long n) {
    unsigned long long fib[n + 2];
    fib[1] = 1;
    fib[2] = 1;
    fib[3] = 1;
    for (int i = 4; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 3];
    }
    return fib[n];
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    cout << fibonacci(n) << "\n";

    return 0;
}