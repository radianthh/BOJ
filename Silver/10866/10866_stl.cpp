#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    deque<int> Dq;

    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        if(s == "push_back") {
            int op;
            cin >> op;
            Dq.push_back(op);
        } else if(s == "push_front") {
            int op;
            cin >> op;
            Dq.push_front(op);
        } else if(s == "pop_front") {
            if(!Dq.empty()) {
                cout << Dq.front() << "\n";
                Dq.pop_front();
            }
            else cout << -1 << "\n";
        } else if(s == "pop_back") {
            if(!Dq.empty()) {
                cout << Dq.back() << "\n";
                Dq.pop_back();
            }
            else cout << -1 << "\n";
        } else if(s == "size") {
            cout << Dq.size() << "\n";
        } else if(s == "empty") {
            if(Dq.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(s == "front") {
            if(!Dq.empty()) cout << Dq.front() << "\n";
            else cout << -1 << "\n";
        } else if(s == "back") {
            if(!Dq.empty()) cout << Dq.back() << "\n";
            else cout << -1 << "\n";
        }   
    }
    return 0;
}