#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    int cnt = 0;
    if (s[0] == ' ' && s.length() == 1) {
       cout << 0 << "\n";
       return 0;
    }
    for (int i = 1; i < s.length() - 1; i++) {
        if(s[i] == ' ') cnt++;
    } 

    cout << cnt + 1 << "\n";
    

    return 0;
}