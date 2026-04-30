#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int &x1, int &x2) {
    return x1 > x2;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K;
    cin >> K;

    int N;
    for (int i = 0; i < K; i++) {
        cin >> N;
        int x[51];
        for (int j = 0; j < N; j++) {
            cin >> x[j];
        }
        sort(x, x + N, cmp);
        int mx = 0;
        for (int k = 0; k < N; k++) {
            if(x[k] - x[k + 1] > mx) mx = x[k] - x[k + 1];  
        }
        cout << "Class " << i + 1 << "\n" << "Max " << x[0] << ", " << "Min " << x[N - 1] << ", ";
        cout << "Largest gap " << mx << "\n";
    }

    return 0;
}