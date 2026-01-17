#include <iostream>

using namespace std;

int main() {

    int N;
    string s;

    cin >> N;

    int b[26] = {0};
    int cnt = 0;
    bool result = false;
    for (int i = 0; i < N; i++) {
        fill(b, b + 26, 0);
        cin >> s;
        for (size_t j = 0; j < s.length(); j++) {
            if(s[j] != s[j + 1]) {
                b[s[j] - 'a']++;
            } else continue;
        }
        for (int k = 0; k < 26; k++) {
            if(b[k] == 0 || b[k] == 1) {
                result = true;
            } else {
                result = false;
                break;
            }
        }
        if(result) {
            cnt++;
        }
    }

    cout << cnt << "\n";



    return 0;
}