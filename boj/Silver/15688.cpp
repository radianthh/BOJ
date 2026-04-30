#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> v;

    int x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (auto a : v) {
        cout << a << "\n";
    }

    return 0;
}