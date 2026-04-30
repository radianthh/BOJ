#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int x = 1;
    int y = 1;
    for (int i = 0; i < K; i++) {
        x *= (N - i);
        y *= (i + 1);
    }

    cout << x / y << "\n";
    
    return 0;
}