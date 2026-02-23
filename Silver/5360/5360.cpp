#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--) {
        string s;
        vector<int> v;
        cin >> s;
        for (size_t i = 0; i < s.length(); i++) {
            v.push_back(s[i] - 48);
        }
        if(next_permutation(v.begin(), v.end())) {
            for (size_t i = 0; i < s.length(); i++) {
                cout << v[i];
            }
            cout << "\n";
        } else cout << "USELESS" << "\n";
    }

    return 0;
}