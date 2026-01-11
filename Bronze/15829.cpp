#include <iostream>
#include <string>

using namespace std;

int main() {
    long long r = 1;
    const int M = 1234567891;

    int L;
    cin >> L;

    string s;
    cin >> s;

    long long hash = 0;
    for (int i = 0; i < L; i++) {
        int h = s[i] - 96;
        hash = (hash + h * r) % M;
        r = (r * 31) % M;
    }

    cout << hash << "\n";

    return 0;
}