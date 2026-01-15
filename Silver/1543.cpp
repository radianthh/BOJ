#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    
    int cnt = 0;

    for (size_t i = 0; i < s1.length();) {
        if(s1.substr(i, s2.length()) == s2) {
            i += s2.length();
            cnt++;
        } else {
            i++;
        }
    }

    cout << cnt << "\n";

    return 0;
}