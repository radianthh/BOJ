#include <iostream>
#include <list>

using namespace std;

int main() {

    string s;
    cin >> s;

    list<char> l;
    for (auto a : s) {
        l.push_back(a);
    }
    auto cursor = l.end();

    int N;
    cin >> N;

    char c;
    while(N--) {
        cin >> c;
        if(c == 'P') {
            char op;
            cin >> op;
            l.insert(cursor, op);
        } else if(c == 'L') {
            if(cursor != l.begin()) {
                cursor--;
            }
        } else if(c == 'D') {
            if(cursor != l.end()) {
                cursor++;
            }
        } else {
            if(cursor != l.begin()) {
                cursor--;
                cursor = l.erase(cursor);
            }
        }
    }
    
    for (auto k : l) {
        cout << k;
    }

    return 0;
}
