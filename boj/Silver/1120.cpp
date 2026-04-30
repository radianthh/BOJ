#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s1, s2;
    cin >> s1 >> s2;

    int cnt = 0;
    int cnt2[50] = {0};
    size_t t = s2.length() - s1.length();

    if(s1.length() == s2.length()) {
        for (size_t i = 0; i < s1.length(); i++) {
            if(s1[i] != s2[i]) cnt++;
        }
        cout << cnt << "\n";
        return 0;
    } else {
        for (size_t j = 0; j < s1.length(); j++) {
            for (size_t e = 0; e <= t; e++) {
                if(s1[j] != s2[e + j]) cnt2[e]++;
            }
        }
    }
    int min = 50;
    for (size_t k = 0; k <= t; k++) {
        if(min > cnt2[k]) min = cnt2[k];
    }
    cout << min << "\n";

    return 0;
}