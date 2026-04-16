#include <iostream>
#include <set>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;

        multiset<long long> m;
        for (int i = 0; i < k; i++) {
            char c;
            cin >> c;
            
            long long input;
            if(c == 'I') {
                cin >> input;
                m.insert(input);
            } else if(c == 'D') {
                cin >> input;
                if(!m.empty()) {
                    if(input == -1) m.erase(m.begin());
                    else m.erase(prev(m.end()));
                }
            }
        }
        if(m.empty()) cout << "EMPTY" << "\n"; 
        else cout << *m.rbegin() << " " << *m.begin() << "\n";
    }
    return 0;
}