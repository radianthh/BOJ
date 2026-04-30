#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, m, a;
int arr[10];
vector<int> v;
void func(int k) {
    if(k == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    int prev = -100001;
    for (int i = 0; i < n; i++) {
        if(prev != v[i] && v[i] >= arr[k - 1]) {
            prev = v[i];
            arr[k] = v[i];
            func(k + 1);
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    func(0);

    return 0;
}