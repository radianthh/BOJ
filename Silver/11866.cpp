#include <iostream>
#include <list>

using namespace std;

int main() {

    int N, K;

    cin >> N >> K;

    list<int> l;
    for (int i = 1; i <= N; i++) {
        l.push_back(i);
    }
    auto cursor = l.begin();
    cout << "<";
    for (int j = 0; j < N; j++) {
        for (int k = 0; k < K - 1; k++) {
            cursor++;
            if(cursor == l.end()) {
                cursor = l.begin();
            }
        }
        if(j == N - 1) cout << *cursor;
        else cout << *cursor << ", ";
        cursor = l.erase(cursor);
        if(cursor == l.end()) cursor = l.begin();
    }
    cout << ">";

    return 0;
}