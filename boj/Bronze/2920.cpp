#include <iostream>

using namespace std;

int main() {

    int x[9];
    for (int i = 1; i <= 8; i++) {
        cin >> x[i];
    }
    int cnt = 0;
    for (int i = 1; i <= 8; i++) {
        if(x[i] == i) cnt++;
    }
    if (cnt == 8) {
        cout << "ascending" << "\n";
        return 0;
    }
    cnt = 0;
    for (int i = 8; i >= 1; i--) {
        if(x[9 - i] == i) cnt++;
    }
    if (cnt == 8) {
        cout << "descending" << "\n";
        return 0;
    }
    cout << "mixed" << "\n";

    return 0;
}