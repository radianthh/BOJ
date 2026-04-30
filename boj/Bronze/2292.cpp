#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int k = 0;
    for (int i = 0; i < 1000000000; i = i + k) {
        if(N <= 1 + i * 6) {
            cout << ++k << "\n";
            return 0;
        }
        k++;
    }

    return 0;
}