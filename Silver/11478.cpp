#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    unordered_set<string> m;
    for (int i = 1; i <= (int)s.length(); i++) {
        for (int j = 0; j <= (int)s.length() - i; j++) {
            m.insert(s.substr(j, i));
        }
    }
    cout << m.size() << "\n";

    return 0;
}