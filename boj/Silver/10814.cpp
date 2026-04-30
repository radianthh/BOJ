#include <iostream>
#include <map>

using namespace std;

int main() {

    int N;
    cin >> N;

    int x[100001];
    string s[100001];
    multimap<int, string> m;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> s[i];
        m.insert(make_pair(x[i], s[i]));
    }

    for (auto iter : m) {
        cout << iter.first << " " << iter.second << "\n";
    }

    return 0;
}