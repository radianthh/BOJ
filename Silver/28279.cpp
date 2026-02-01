#include <iostream>
#include <deque>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> D;
    int N;
    cin >> N;

    int x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if(x == 1) {
            int op1;
            cin >> op1;
            D.push_front(op1);
        }
        else if(x == 2) {
            int op2;
            cin >> op2;
            D.push_back(op2);
        }
        else if(x == 3) {
            if(!D.empty()) {
                cout << D.front() << "\n";
                D.pop_front();
            } else cout << -1 << "\n";
        } else if(x == 4) {
            if(!D.empty()) {
                cout << D.back() << "\n";
                D.pop_back();
            } else cout << -1 << "\n";
        } else if(x == 5) cout << D.size() << "\n";
        else if(x == 6) {
            if(D.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if(x == 7) {
            if(!D.empty()) cout << D.front() << "\n";
            else cout << -1 << "\n";
        } else if(x == 8) {
            if(!D.empty()) cout << D.back() << "\n";
            else cout << -1 << "\n";
        }
    }

    return 0;
}