#include <iostream>
#include <list>
using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 2;
int cursor;

void traverse() {
    int cur = nxt[0];
    while(cur != 1) {
        cout << dat[cur];
        cur = nxt[cur];
    }
    cout << "\n";
}

void insert(int cursor, char c) {
    dat[unused] = c;
    pre[unused] = pre[cursor];
    nxt[unused] = cursor;
    nxt[pre[cursor]] = unused;
    pre[cursor] = unused;
    unused++;
}

void erase(int cursor) {
    if(pre[cursor] != 0) {
        nxt[pre[pre[cursor]]] = cursor;
        pre[cursor] = pre[pre[cursor]];
    }
}

int main() {
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);

    string input;
    cin >> input;

    pre[1] = 0;
    nxt[1] = -1;
    pre[0] = -1;
    nxt[0] = 1;

    for (char ch : input) {
        dat[unused] = ch;
        pre[unused] = pre[1];
        nxt[unused] = 1;
        nxt[pre[1]] = unused;
        pre[1] = unused;
        unused++;
    }

    int x;
    char c, p;
    cin >> x;
    cursor = 1;
    for (int i = 0; i < x; i++) {
        cin >> c;
        if(c == 'P') {
            cin >> p;
            insert(cursor, p);
        } else if (c == 'L') {
            if(pre[cursor] != 0) cursor = pre[cursor];
        } else if (c == 'D') {
            if(nxt[cursor] != -1) cursor = nxt[cursor];
        } else if (c == 'B') {
            erase(cursor);
        }
    }
    traverse();

    return 0;
}