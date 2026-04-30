#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    int N, M;

    cin >> N >> M;

    string s;
    map<string, int> m;
    int cnt = 0;

    for (int i = 0; i < N + M; i++) {
        cin >> s;
        m[s]++;
        if(m[s] == 2) {
            cnt++;
        }
    }

    cout << cnt << "\n";
    for (auto a : m) {
        if(a.second == 2) {
            cout << a.first << "\n";
        }
    }

    return 0;
}