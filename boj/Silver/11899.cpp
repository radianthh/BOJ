#include <iostream>
#include <stack>
using namespace std;

int main() {

    string s;
    cin >> s;

    stack<char> S;
    int cnt = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if(s[i] == '(') S.push(s[i]);
        else {
            if(S.empty()) {
                cnt++;
                continue;
            } else if(!S.empty() && S.top() == '(') {
                S.pop();
            }
        }
    }
    cout << cnt + S.size() << "\n";

    return 0;
}