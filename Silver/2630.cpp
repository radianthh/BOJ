#include <iostream>

using namespace std;

int board[130][130];
int cnt[2] = {0};
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
        cnt[first]++;
        return;
    }

    int step = N / 2;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            func(step, r + i * step, c + j * step);
        }
    }
}

int main() {

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

    return 0;
}