#include <iostream>
#include <stack>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    int x;
    stack<int> S;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if(x == 1) {
            int op;
            cin >> op;
            S.push(op);
        } else if(x == 2) {
            if(!S.empty()) {
                cout << S.top() << "\n";
                S.pop();
            } else cout << -1 << "\n";
        } else if(x == 3) {
            cout << S.size() << "\n";
        } else if(x == 4) {
            if(S.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(x == 5) {
            if(!S.empty()) cout << S.top() << "\n";
            else cout << -1 << "\n";
        }
    }

    return 0;
}