#include <iostream>

using namespace std;

int cnt1 = 0;
int cnt2 = 0;

int fib(int n) {
    if(n == 1 || n == 2) {
        cnt1++;
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int fibonacci(int n) {
    int fib1[n + 2];
    fib1[1] = 1;
    fib1[2] = 1;
    for (int i = 3; i <= n; i++) {
        cnt2++;
        fib1[i] = fib1[i - 1] + fib1[i - 2];
    }
    return fib1[n];
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    fib(n);
    fibonacci(n);

    cout << fib(n) << " " << fibonacci(n) << "\n";
    cout << cnt1 << " " << cnt2 << "\n";

    return 0;
}