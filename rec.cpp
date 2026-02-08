#include <iostream>

using namespace std;

void func1(int n) {
    if(n == 0) return;
    cout << n << " ";
    func1(n - 1);
}

int func2(int n) {
    if(n == 0) return;
    return n + func2(n - 1);
}

long long func3(long long a, long long b, long long m) {
    long long val = 1;
    while(b--) val = val * a % m;
    return val;
}

int main() {



    return 0;
}