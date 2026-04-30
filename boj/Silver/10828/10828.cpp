#include <iostream>
#include <string>

using namespace std;

const int MX = 1000005;
int dx[MX];
int pos = 0;

void push(int x) {
    dx[pos++] = x;
}

void pop() {
    if(pos > 0) pos--;
}

int top() {
    if(pos > 0) {
        return dx[pos - 1];
    }
    return -1;
}

bool empty() {
    if(pos == 0) return true;
    else return false;
}

int size() {
    return pos;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        if(s == "push") {
            int op;
            cin >> op;
            push(op);
        } else if(s == "pop") {
            if(empty()) cout << -1 << "\n";
            else {
                cout << top() << "\n";
                pop();
            }
        } else if(s == "size") {
            cout << size() << "\n"; 
        } else if(s == "empty") {
            if(empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(s == "top") {
            if(empty()) cout << -1 << "\n";
            else cout << top() << "\n";
        }
    }

    return 0;
}