#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    while(1) {
        cin >> x >> y;
        if(x == 0 && y == 0) return 0;
        if(x > y) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }


    return 0;
}