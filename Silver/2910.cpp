#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(const pair<int, int> &p1, const pair<int, int> &p2) {
    return p1.second > p2.second;
}

int main() {

    vector<pair<int, int>> v;

    int N, C;
    cin >> N >> C;

    for (int i = 0; i < N; i++) {
        bool alreay = false;
        int a;
        cin >> a;
        for (auto &c : v) {
            if(c.first == a) {
                c.second++;
                alreay = true;
                break;
            }
        }
        if(!alreay) v.push_back({a, 1});
    }

    stable_sort(v.begin(), v.end(), cmp);

    for (auto e : v) {
        while(e.second--) {
            cout << e.first << " ";
        }
    }

    return 0;
}