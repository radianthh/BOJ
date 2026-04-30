#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    set<int> A, B;
    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        A.insert(input);
    }

    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        B.insert(input);
    }

    int cnt = 0;
    for (auto a : A) {
        if(B.find(a) == B.end()) cnt++;
    }

    for (auto b : B) {
        if(A.find(b) == A.end()) cnt++;
    }
    cout << cnt << "\n";

    return 0;
}