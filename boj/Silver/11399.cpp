#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int N;
    cin >> N;

    int p[1001];
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }
    sort(p, p + N);

    int sum[1001];
    sum[0] = p[0];
    for (int j = 1; j < N; j++) {
        sum[j] = sum[j - 1] + p[j];
    }

    int finish = 0;
    for (int k = 0; k < N; k++) {
        finish += sum[k];
    }

    cout << finish << "\n";

    return 0;
}