#include <iostream>

using namespace std;

int main() {

    int n, d;

    cin >> n >> d;

    int cnt[10] = {0};
    for (int i = 1; i <= n; i++) {
        if(i < 10) cnt[i]++;
        else if(i < 100) {
            cnt[i % 10]++;
            cnt[i / 10]++;
        } else if(i < 1000) {
            cnt[i % 10]++;
            cnt[(i % 100) / 10]++;
            cnt[i / 100]++;
        } else if(i < 10000) {
            cnt[i % 10]++;
            cnt[(i % 100) / 10]++;
            cnt[(i % 1000) / 100]++;
            cnt[i / 1000]++;
        } else if(i < 100000) {
            cnt[i % 10]++;
            cnt[(i % 100) / 10]++;
            cnt[(i % 1000) / 100]++;
            cnt[(i % 10000) / 1000]++;
            cnt[i / 10000]++;
        } else {
            cnt[i % 10]++;
            cnt[(i % 100) / 10]++;
            cnt[(i % 1000) / 100]++;
            cnt[(i % 10000) / 1000]++;
            cnt[(i % 100000) / 10000]++;
            cnt[i / 100000]++;
        }
    }

    cout << cnt[d] << "\n";

    return 0;
}