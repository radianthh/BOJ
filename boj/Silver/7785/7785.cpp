#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string name, record;
    set<string> s;
    for (int i = 0; i < N; i++) {
        cin >> name >> record;
        if(record == "enter") s.insert(name);
        else s.erase(name);
    }
    for (auto it = s.rbegin(); it != s.rend(); it++) {
        cout << *it << "\n";
    }

    return 0;
}