#include <iostream>

using namespace std;

const int MX = 100;
long long fib[MX] = {0};

long long fibonacci(int n) {
    if(n <= 1) return n;
    else if(fib[n]) return fib[n];
    else return fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << fibonacci(n) << "\n";

    return 0;
}