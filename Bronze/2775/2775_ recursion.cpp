#include <iostream>
using namespace std;

int getRecursive(int x, int y) {
    if(y == 1) return 1;
    else if(x == 0) return y;
    else return getRecursive(x - 1, y) + getRecursive(x, y - 1);
}

int main() {

    int N;
    int x, y;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        cout << getRecursive(x, y) << "\n";
    }

    return 0;
}