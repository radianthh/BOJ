#include <iostream>
#include <queue>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    queue<int> Q;
    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        if(s == "push") {
            int op;
            cin >> op;
            Q.push(op);
        } else if(s == "pop") {
            if(Q.empty()) cout << -1 << "\n";
            else {
                cout << Q.front() << "\n";
                Q.pop();
            }
        } else if(s == "size") {
            cout << Q.size() << "\n";
        } else if(s == "empty") {
            if(Q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(s == "front") {
            if(Q.empty()) cout << -1 << "\n";
            else cout << Q.front() << "\n";
        } else {
            if(Q.empty()) cout << -1 << "\n";
            else cout << Q.back() << "\n";
        }
    }

    return 0;
}