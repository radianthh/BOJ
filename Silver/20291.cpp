#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    int N;
    cin >> N;

    string s;
    map<string, int> cnt;

    for (int i = 0; i < N; i++) {
        cin >> s;
        cnt[s.substr(s.find('.') + 1, s.length())]++;
    }
    
    for (auto c : cnt) {
        cout << c.first << " " << c.second << "\n";
    }

    return 0;
}