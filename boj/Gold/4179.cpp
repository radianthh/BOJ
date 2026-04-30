#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char board[1002][1002];
int dis[1002][1002];
int dis_f[1002][1002];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    memset(dis, -1, sizeof(dis));
    memset(dis_f, -1, sizeof(dis_f));

    int R, C;
    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> board[i][j];
        }
    }

    queue<pair<int, int>> Q;
    queue<pair<int, int>> Q_F;
    for (int k = 0; k < R; k++) {
        for (int e = 0; e < C; e++) {
            if(board[k][e] == 'J') {
                dis[k][e] = 0;
                Q.push({k, e});
            }
            if(board[k][e] == 'F') {
                dis_f[k][e] = 0;
                Q_F.push({k, e});
            }
        }
    }

    while(!Q_F.empty()) {
        pair<int, int> cur_F = Q_F.front();
        Q_F.pop();

        for (int a = 0; a < 4; a++) {
            int nx_f = cur_F.first + dx[a];
            int ny_f = cur_F.second + dy[a];
            if(nx_f < 0 || nx_f >= R || ny_f < 0 || ny_f >= C) continue;
            if(dis_f[nx_f][ny_f] != -1 || board[nx_f][ny_f] == '#') continue;
            dis_f[nx_f][ny_f] = dis_f[cur_F.first][cur_F.second] + 1;
            Q_F.push({nx_f, ny_f});
        }
    }

    while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int b = 0; b < 4; b++) {
            int nx = cur.first + dx[b];
            int ny = cur.second + dy[b];

            int nt = dis[cur.first][cur.second] + 1;

            if(nx < 0 || nx >= R || ny < 0 || ny >= C) {
                cout << nt << "\n";
                return 0;
            }
            if(dis[nx][ny] != -1 || board[nx][ny] == '#') continue;
            if(dis_f[nx][ny] != -1 && dis_f[nx][ny] <= nt) continue;
            dis[nx][ny] = nt;
            Q.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE" << "\n";

    return 0;
}