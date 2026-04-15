#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int n;
    while(t--) {
        unordered_map<string, int> m;
        int sum = 1;
        cin >> n;
        for (int i = 0; i < n; i++) {
            string name, type;
            cin >> name >> type;
            m[type]++;
        }
        for (auto a : m) {
            sum *= (a.second + 1);
        }
        cout << sum - 1 << "\n";
    }


    return 0;
}