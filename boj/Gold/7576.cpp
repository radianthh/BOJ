#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> m >> n;

    int board[1002][1002];
    int dis[1002][1002];
    memset(dis, -1, sizeof(dis));
    queue<pair<int, int>> Q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    for (int k = 0; k < n; k++) {
        for (int e = 0; e < m; e++) {
            if(board[k][e] == 1) {
                Q.push({k, e});
                dis[k][e] = 0;
            }
        }
    }
    while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();
        for(int a = 0; a < 4; a++) {
            int nx = cur.first + dx[a];
            int ny = cur.second + dy[a];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(dis[nx][ny] != -1 || board[nx][ny] != 0) continue;
            dis[nx][ny] = dis[cur.first][cur.second] + 1;
            board[nx][ny] = 1;

            Q.push({nx, ny});
        }
    }    

    int mx = 0;
    for (int c = 0; c < n; c++) {
        for (int d = 0; d < m; d++) {
            if(board[c][d] == 0) {
                cout << -1 << "\n";
                return 0;
            }
            mx = max(mx, dis[c][d]);
        }
    }
    cout << mx << "\n";

    return 0;

}