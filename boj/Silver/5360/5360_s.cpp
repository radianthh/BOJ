#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        if(next_permutation(s.begin(), s.end())) {
            cout << s << "\n";
        } else cout << "USELESS" << "\n";
    }

    return 0;
}