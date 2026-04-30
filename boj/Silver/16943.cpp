    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    int main() {

        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string A, B;
        cin >> A >> B;

        if(A.size() > B.size()) {
            cout << -1 << "\n";
            return 0;
        }

        sort(A.begin(), A.end(), greater<char>());

        if(A.size() < B.size()) {
            if(A[0] == '0') {
                cout << -1 << "\n";
                return 0;
            } else {
                cout << A << "\n";
                return 0;
            }
        }

        do {
            if(A[0] == '0') continue;
           
            if(A < B) {
                cout << A << "\n";
                return 0;
            }
        } while(prev_permutation(A.begin(), A.end()));

        cout << -1 << "\n";

        return 0;
    }