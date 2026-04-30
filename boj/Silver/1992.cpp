#include <iostream>

using namespace std;

int board[65][65];

void func(int N, int r, int c) {
    if(N == 0) return;

    bool same = true;
    int first = board[r][c];
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
        cout << first;
        return;
    }

    int step = N / 2;
    cout << '(';
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            func(step, r + step * i, c + step * j);
        }
    }
    cout << ')';

}

int main() {

    int N;
    cin >> N;

    string s;

    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < N; j++) {
            board[i][j] = s[j] - '0';
        }
    }

    func(N, 0, 0);

    return 0;
}