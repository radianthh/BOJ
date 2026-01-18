#include <iostream>
using namespace std;

const int MX = 100001;
int dat[MX];
int pos = 0;

void push(int x) {
    dat[pos++] = x;
}

void pop() {
    if(pos > 0) {
        pos--;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    int x;

    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x != 0) push(x);
        else pop();
    }

    int sum = 0;
    for (int i = 0; i < pos; i++) {
        sum += dat[i];
    }

    cout << sum << "\n";

    return 0;
}