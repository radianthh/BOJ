#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int N, L;
    cin >> N >> L;

    vector<int> v;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    for (auto a : v) {
        if(a <= L) L++;
    }
    cout << L << "\n";

    return 0;
}