#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isused[50];
int arr[50];

void func(int k, int n, vector<int> &v) {
    if(k == 6) {
        for (int i = 0; i < 6; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        if(!isused[v[i]] && (k == 0 || arr[k - 1] <= v[i])) {
            arr[k] = v[i];
            isused[v[i]] = 1;
            func(k + 1, n, v);
            isused[v[i]] = 0;
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(1) {
        vector<int> v;
        int n, a;
        cin >> n;
        if(n == 0) return 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        func(0, n, v);
        cout << "\n";
    }

    return 0;
}