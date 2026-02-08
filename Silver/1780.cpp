#include <iostream>

using namespace std;

int board[2190][2190];
int cnt[3] = {0};
void func(int N, int r, int c) {
    if(N == 0) return;
    int first = board[r][c];
    bool same = true;

    for (int i = r; i < r + N; i++) {
        for (int j = c; j < c + N; j++) {
            if(board[i][j] != first) {
                same = false;
                break;
            }
        }
        if(!same) break;
    }
    if(same) {
        cnt[first + 1]++;
        return;
    }

    int step = N / 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            func(step, r + i * step, c + j * step);
        }
    }

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }
    func(N, 0, 0);
    cout << cnt[0] << "\n";
    cout << cnt[1] << "\n";
    cout << cnt[2] << "\n";

    return 0;
}