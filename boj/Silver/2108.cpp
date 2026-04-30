#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second == p2.second) return p1.first < p2.first;
    return p1.second > p2.second;
}

int main() {    

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, int>> v(8001);
    for(int i = 0; i <= 8000; i++) {
        v[i].first = i - 4000;
        v[i].second = 0;
    }
    int A[500001];
    double sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        v[A[i] + 4000].second++;
        sum += A[i];
    }
    cout << (int) round(sum / N) << "\n";
    sort(A, A + N);
    cout << A[N / 2] << "\n";

    sort(v.begin(), v.end(), cmp);
    if(v[0].second == v[1].second) cout << v[1].first << "\n";
    else cout << v[0].first << "\n";
    cout << A[N - 1] - A[0] << "\n";

    return 0;
}