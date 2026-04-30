#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1, s2;
    int N;

    cin >> s1 >> N;
    int cnt = 0;
    for (size_t i = 0; (int) i < N; i++) {
        cin >> s2;
        bool ok = false;

        for (size_t j = 0; j < s2.length(); j++) {
            size_t k = j + s1.length();
            if(k > s2.length()) {
                if(s2.substr(j, s2.length() - j) 
                + s2.substr(0, k - s2.length()) == s1) {
                    ok = true;
                    break;
                }
            } else {
                if(s2.substr(j, s1.length()) == s1) {
                    ok = true;
                    break;
                }
            }
        }
        if(ok) {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}