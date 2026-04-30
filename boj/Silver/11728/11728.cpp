#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;

    cin >> N >> M;
    int A, B;

    vector<int> v;

    while(N--) {
        cin >> A;
        v.push_back(A);
    }
    while(M--) {
        cin >> B;
        v.push_back(B);
    }

    sort(v.begin(), v.end());

    for(auto a : v) {
        cout << a << " ";
    }

    return 0;
}