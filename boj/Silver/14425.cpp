#include <iostream>
#include <set>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    string s;
    set<string> m;
    for (int i = 0; i < N; i++) {
        cin >> s;
        m.insert(s);
    }

    int cnt = 0;
    for (int i = 0; i < M; i++) {
        cin >> s;
        if(m.find(s) != m.end()) cnt++;
    }
    cout << cnt << "\n";

    return 0;
}