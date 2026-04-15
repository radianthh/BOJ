#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K, L;
    cin >> K >> L;
    unordered_set<string> s;
    vector<string> v;

    string input;
    for (int i = 0; i < L; i++) {
        cin >> input;
        if(s.find(input) == s.end()) {
            s.insert(input);
            v.push_back(input);
        } else {
            v.erase(remove(v.begin(), v.end(), input), v.end());
            v.push_back(input);
        }
    }

    for (int i = 0; i < K; i++) {
        cout << v[i] << "\n";
    }
    return 0;
}