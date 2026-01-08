#include <iostream>

using namespace std;

int main() {

    int x;
    cin >> x;

    for (int i = 1; i <= x; i++) {
        string s = to_string(i);
        int sum = 0;
        for (int j = 0; j < s.length(); j++) {
            sum += s[j] - '0';
        }
        if(sum + i == x) {
            cout << i << "\n";
            return 0;
        }
    }
    cout << 0 << "\n";

    return 0;
}