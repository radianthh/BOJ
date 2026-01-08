#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool umm(string &s1, string &s2) {
    if(s1.length() != s2.length()) return s1.length() < s2.length();
    return s1 < s2;
}

int main() {

    int x;
    cin >> x;

    string s[20001];
    for (int i = 0; i < x; i++) {
        cin >> s[i];
    }
    sort(s, s + x, umm);

    cout << s[0] << "\n";
    for (int i = 1; i < x; i++) {
        if(s[i - 1] != s[i]) cout << s[i] << "\n";
    }
    cout << "\n";


    return 0;
}