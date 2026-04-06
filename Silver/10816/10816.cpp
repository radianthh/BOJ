#include <iostream>
#include <algorithm>
using namespace std;

int A[500001];
int lower_index(int target, int len) {
    int st = 0;
    int en = len;
    while(st < en) {
        int mid = (st + en) / 2;
        if(A[mid] >= target) en = mid;
        else st = mid + 1;
    }
    return st;
}

int upper_index(int target, int len) {
    int st = 0;
    int en = len;
    while(st < en) {
        int mid = (st + en) / 2;
        if(A[mid] > target) en = mid;
        else st = mid + 1;
    }
    return st;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N);

    cin >> M;
    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        cout << upper_index(input, N) - lower_index(input, N) << " ";
    }

    return 0;
}