#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end(), cmp);
    int sum1 = 0;
    for (int i = 0; i < 3; i++) {
        sum1 += v1[i];
    }

    vector<int> v2;
    for (int i = 0; i < 10; i++) {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    sort(v2.begin(), v2.end(), cmp);

    int sum2 = 0;
    for (int i = 0; i < 3; i++) {
        sum2 += v2[i];
    }

    cout << sum1 << " " << sum2 << "\n";

    return 0;
}