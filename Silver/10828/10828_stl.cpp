#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string s;
    stack<int> stc;

    for (int i = 0; i < N; i++) {
        cin >> s;
        if(s == "push") {
            int op;
            cin >> op;
            stc.push(op);
        } else if(s == "pop") {
            if(stc.empty()) cout << -1 << "\n";
            else {
                cout << stc.top() << "\n";
                stc.pop();
            }
        } else if(s == "size") {
            cout << stc.size() << "\n"; 
        } else if(s == "empty") {
            if(stc.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(s == "top") {
            if(stc.empty()) cout << -1 << "\n";
            else cout << stc.top() << "\n";
        }
    }

    return 0;
}