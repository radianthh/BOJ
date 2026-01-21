#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, d;
    cin >> n >> d;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        for (size_t j = 0; j < s.length(); j++) {
            if(s[j] - '0' == d) cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}