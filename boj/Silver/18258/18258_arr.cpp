#include <iostream>

using namespace std;

const int MX = 2000001;
int dat[MX];
int head = 0;
int tail = 0;

void push(int x) {
    dat[tail++] = x;
}

void pop() {
    head++;
}

bool empty() {
    if(head == tail) return true;
    else return false;
}

int front() {
    return dat[head];
}

int back() {
    return dat[tail - 1];
}

int size() {
    return tail - head;
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
                cout << front() << "\n";
                pop();
            }
        } else if(s == "size") {
            cout << size() << "\n";
        } else if(s == "empty") {
            if(empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(s == "front") {
            if(empty()) cout << -1 << "\n";
            else cout << front() << "\n";
        } else {
            if(empty()) cout << -1 << "\n";
            else cout << back() << "\n";
        }
    }

    return 0;
}