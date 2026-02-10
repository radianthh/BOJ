#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, m, a;
int arr[10];
bool isused[10];
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
        if(!isused[i] && prev != v[i] && arr[k - 1] <= v[i]) {
            prev = v[i];
            arr[k] = v[i];
            isused[i] = 1;
            func(k + 1);
            isused[i] = 0;
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