#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string name, record;
    unordered_set<string> s;
    for (int i = 0; i < N; i++) {
        cin >> name >> record;
        if(record == "enter") s.insert(name);
        else s.erase(name);
    }
    vector<string> v(s.begin(), s.end());
    sort(v.begin(), v.end(), greater<string>());

    for (auto a : v) {
        cout << a << "\n";
    }

    return 0;
}