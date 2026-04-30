#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, h;
    while(1) {
        queue<pair<int, int>> Q;
        int board[51][51];
        int vis[51][51];
        memset(vis, 0, sizeof(vis));
        int cnt = 0;
        cin >> w >> h;
        if(w == 0 && h == 0) return 0;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> board[i][j];
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if(board[i][j] == 1 && !vis[i][j]) {
                    cnt++;
                    vis[i][j] = 1;
                    Q.push({i, j});

                    while(!Q.empty()) {
                        pair<int, int> cur = Q.front();
                        Q.pop();

                        for (int k = 0; k < 8; k++) {
                            int nx = cur.first + dx[k];
                            int ny = cur.second + dy[k];

                            if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                            if(vis[nx][ny] || board[nx][ny] != 1) continue;
                            vis[nx][ny] = 1;
                            Q.push({nx, ny});
                        }
                    }
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}