#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    int A, B;
    char comma;
    for (int i = 0; i < T; i++) {
        cin >> A >> comma >> B;
        cout << A + B << "\n";
    }

    return 0;
}