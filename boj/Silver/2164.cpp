#include <iostream>
#include <queue>

using namespace std;

int main() {

    int N;
    cin >> N;

    queue<int> Q;
    for (int i = 1; i <= N; i++) {
        Q.push(i);
    }

    int q;
    while(!Q.empty()) {
        if(Q.size() == 1) {
            break;
        }
        Q.pop();
        q = Q.front();
        Q.pop();
        Q.push(q);
    }

    cout << Q.front() << "\n";
}