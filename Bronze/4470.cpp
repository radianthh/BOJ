#include <iostream>
#include <string>

using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cin.ignore();

    string s;
    for (int i = 1; i <= N; i++) {
        getline(cin, s);
        cout << i << ". " << s << "\n";
    }

    return 0;
}