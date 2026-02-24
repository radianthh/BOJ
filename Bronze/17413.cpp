#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore();

    string line;
    stack<string> S;
    for (int i = 0; i < N; i++) {
        getline(cin, line);
        stringstream ss(line);

        string word;
        while(ss >> word) {
            S.push(word);
        }

        cout << "Case #" << i + 1 << ": ";
        while(!S.empty()) {
            cout << S.top() << " ";
            S.pop();
        }
        cout << "\n";
    }

    return 0;
}