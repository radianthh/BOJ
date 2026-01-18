#include <iostream>
#include <list>

using namespace std;

int main() {

    int K, N;

    cin >> N >> K;

    list<int> l;
    for (int i = 1; i <= N; i++) {
        l.push_back(i);
    }

    auto cursor = l.begin();

    cout << "<";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K - 1; j++) {
            cursor++;
            if(cursor == l.end()) {
                cursor = l.begin();
            }
        }
        if(i == N - 1) cout << *cursor;
        else cout << *cursor << ", ";
        cursor = l.erase(cursor);
        if(cursor == l.end()) cursor = l.begin();
    }
    cout << ">";

    return 0;
}
