#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> A, B;

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        A.push_back(input);
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        B.push_back(input);
    }
    sort(B.begin(), B.end());
    size_t size = A.size() + B.size();
    vector<int> C(size);

    auto it = set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), C.begin());
    cout << it - C.begin() << "\n";

    return 0;
}