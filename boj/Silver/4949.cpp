#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    stack<char> S;

    while(1) {
        bool ok = true;
        getline(cin, s);
        if(s == ".") return 0;
        for (size_t i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[') {
                S.push(s[i]);
            } else if(s[i] == ')') {
                if(!S.empty() && S.top() == '(') {
                    S.pop();
                } else {
                    ok = false;
                    break;
                }
            } else if(s[i] == ']') {
                if(!S.empty() && S.top() == '[') {
                    S.pop();
                } else {
                    ok = false;
                    break;
                }
            }
        }
        if(!S.empty()) ok = false;
        if(ok) cout << "yes" << "\n";
        else cout << "no" << "\n";

        while(!S.empty()) {
            S.pop();
        }
    }

    return 0;
}