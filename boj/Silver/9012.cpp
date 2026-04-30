#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string s;
    bool ok = true;
    for (int i = 0; i < N; i++) {
        cin >> s;
        stack<char> S;
        for (size_t j = 0; j < s.length(); j++) {
            if(s[j] == '(') S.push(s[j]);
            else {
                if(!S.empty() && S.top() == '(') {
                    S.pop();
                } else {
                    ok = false;
                    S.push(s[j]);
                    break;
                }
            }
        }
        if(!S.empty()) ok = false;
        else ok = true;
        
        if(ok) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}