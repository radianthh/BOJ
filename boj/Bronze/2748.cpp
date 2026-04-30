#include <iostream>

using namespace std;

unsigned long long fibonacci(int n) {
    unsigned long long fib[n+2];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << fibonacci(n) << "\n";

    return 0;
}