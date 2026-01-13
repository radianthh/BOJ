#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(int &a, int &b) {
    return a > b;
}

int main() {

    string N;
    cin >> N;

    int a[10];
    fill(a, a + 10, -1);
    for (size_t i = 0; i < N.length(); i++) {
        a[i] = N[i] - '0';
    }
    sort(a, a + 10, cmp);
    for (size_t j = 0; j < 10; j++) {
        if(a[j] != -1) cout << a[j];
    }
    return 0;
}