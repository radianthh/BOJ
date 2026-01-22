#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    int N;
    cin >> N;

    string s;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> s;
        stack<char> S;
        for (size_t j = 0; j < s.length(); j++) {
            if(S.empty()) {
                S.push(s[j]);
            } else if(!S.empty() && S.top() != s[j]) {
                S.push(s[j]);
            } else if(!S.empty() && S.top() == s[j]) {
                S.push(s[j]);
                S.pop();
                S.pop();
            }
        }
        if(S.empty()) cnt++;
    }

    cout << cnt << "\n";

    return 0;
}