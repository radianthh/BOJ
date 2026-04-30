#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    string temp1, temp2;
    int n = 0;
    int m = 0;
    for(size_t i = 0; i < s.length(); i++) {
        if(s[i] == ':') {
            temp1 = s.substr(0, i);
            n = stoi(temp1);

            temp2 = s.substr(i + 1, s.length());
            m = stoi(temp2);
        }
    }

    int k = min(n, m);
    int result = 0;
    for (int i = 1; i <= k; i++) {
        if(n % i == 0 && m % i == 0) {
            result = i;
        }
    }
    cout << n / result << ":" << m / result << "\n";

    return 0;
}