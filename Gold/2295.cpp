#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int a[1001];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a, a + N);
    vector<long long> two;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            two.push_back(a[i] + a[j]);
        }
    }   
    sort(two.begin(), two.end());
    int mx = -1;
    for (int k = 0; k < N; k++) {
        for (int l = k; l < N; l++) {
            if(binary_search(two.begin(), two.end(), a[l] - a[k])) {
                mx = max(mx, a[l]);
            }
        }
    }
    cout << mx << "\n";


    return 0;
}