#include <iostream>
#include <unordered_map>
using namespace std;

string s[500001];
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string, int> m;

    int K, L;
    cin >> K >> L;

    for (int i = 1; i <= L; i++) {
        cin >> s[i];
        m[s[i]] = i;
    }

    int cnt = 0;
    for (int i = 1; i <= L && cnt < K; i++) {
        if(m[s[i]] == i) {
            cout << s[i] << "\n";
            cnt++;
        } else continue;
    }

    return 0;
}