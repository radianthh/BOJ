#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    stack<int> S;

    int x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if(x != 0) S.push(x);
        else S.pop();
    }

    int sum = 0;
    while(!S.empty()) {
        sum += S.top();
        S.pop();
    }

    cout << sum << "\n";

    return 0;
}