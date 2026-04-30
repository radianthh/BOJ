#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    
    int cnt = 0;
    while(1) {
        cin >> s;
        if(s == "0") break;
        for (int i = 0; i < s.length() / 2; i++) {
            if(s[i] - '0' == s[s.length() - 1 - i] - '0') {
                cnt++;
            }
        }
        if(cnt == s.length()/2) cout << "yes" << "\n";
        else cout << "no" << "\n";
        cnt = 0;
    }



    return 0;
}