#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> v;
    int a;
    for (int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
    }
    if(next_permutation(v.begin(), v.end())) {
        for (int i = 0; i < N; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    } else cout << -1 << "\n";

    return 0;
}