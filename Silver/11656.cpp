#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s;
    cin >> s;
    string result[1001];

    for (size_t i = 0; i < s.length(); i++) {
        result[i] = s.substr(i, s.length() - i);
    }

    sort(result, result + s.length());

    for (size_t j = 0; j < s.length(); j++) {
        cout << result[j] << "\n";
    }

    return 0;
}