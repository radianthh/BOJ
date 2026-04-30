#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int N;
    cin >> N;
    
    int cnt[10001] = {0};
    int y;
    for (int i = 0; i < N; i++) {
        cin >> y;
        cnt[y]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while(cnt[i]--) {
            cout << i << "\n";
        }
    }

    return 0;
}