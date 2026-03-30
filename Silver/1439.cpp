#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cnt[2] = {0};
    if(s[0] == '0') cnt[0]++;
    else cnt[1]++;

    for (int i = 1; i <= (int) s.length(); i++) {
        if(s[i] != s[i - 1]) cnt[s[i] - 48]++;
        else continue;
    }

    cout << min(cnt[0], cnt[1]) << "\n";

    return 0;
}