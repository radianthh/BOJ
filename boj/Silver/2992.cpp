#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> v;

    for (size_t i = 0; i < s.length(); i++) {
        v.push_back(s[i] - 48);
    }
    if(next_permutation(v.begin(), v.end())) {
        for (size_t i = 0; i < v.size(); i++) {
            cout << v[i];
        }
        cout << "\n";
    } else cout << 0 << "\n";

    return 0;
}