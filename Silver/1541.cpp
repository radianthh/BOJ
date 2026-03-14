#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stringstream ss(s);
    string part;
    vector<int> v;
    while(getline(ss, part, '-')) {
        stringstream ss2(part);
        string x;
    
        int sum = 0;
        while(getline(ss2, x, '+')) {
            sum += stoi(x);
        }
        v.push_back(sum);
    }

    int ans = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        ans -= v[i];
    }
    cout << ans << "\n";

    return 0;
}