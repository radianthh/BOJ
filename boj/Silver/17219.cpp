#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    unordered_map<string, string> m;
    while(N--) {
        string address, password;
        cin >> address >> password;
        m[address] = password;
    }

    while(M--) {
        string input;
        cin >> input;
        cout << m[input] << "\n";
    }

    return 0;
}