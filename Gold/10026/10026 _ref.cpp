#include <iostream>
#include <queue>
#include <string>
#include <cstring>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

char board[102][102];
int vis[102][102];
int N;

void bfs(int k, int e) {
    queue<pair<int, int>> Q;
    Q.push({k, e});
    vis[k][e] = 1;

    while (!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int a = 0; a < 4; a++) {
            int nx = cur.first + dx[a];
            int ny = cur.second + dy[a];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (board[nx][ny] != board[k][e] || vis[nx][ny]) continue;
            vis[nx][ny] = 1;
            Q.push({nx, ny});
        }
    }
}

int area() {
    int cnt = 0;
    for (int k = 0; k < N; k++) {
        for (int e = 0; e < N; e++) {
            if (!vis[k][e]) {
                cnt++;
                bfs(k, e);
            }
        }
    }
    return cnt;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    string s;
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < N; j++) {
            board[i][j] = s[j];
        }
    }
    cout << area() << " ";

    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(board[i][j] == 'G') board[i][j] = 'R';
        }
    }
    cout << area() << "\n";

    return 0;
}