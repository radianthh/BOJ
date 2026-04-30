#include <iostream>
#include <cctype>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    unordered_map<string, int> m;
    string s[100001];
    for (int i = 1; i <= N; i++) {
        cin >> s[i];
        m[s[i]] = i;
    }
    string input;
    for (int i = 0; i < M; i++) {
        cin >> input;
        if(isdigit(input[0])) cout << s[stoi(input)] << "\n";
        else cout << m[input] << "\n";
    }

    return 0;
}