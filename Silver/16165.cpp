#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    unordered_map<string, vector<string>> m1;
    unordered_map<string, string> m2;
    while(N--) {
        string s;
        cin >> s;
        int cnt;
        cin >> cnt;
        while(cnt--) {
            string name;
            cin >> name;
            m1[s].push_back(name);
            m2[name] = s;
        }
        sort(m1[s].begin(), m1[s].end());
    }

    while(M--) {
        string s;
        int input;
        cin >> s >> input;
        if (input == 1) cout << m2[s] << "\n";
        else {
            for (auto a : m1[s]) {
                cout << a << "\n";
            }
        }
    }

    return 0;
}