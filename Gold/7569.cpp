    #include <iostream>
    #include <cstring>
    #include <queue>
    #include <algorithm>
    using namespace std;

    int board[101][101][101];
    int dis[101][101][101];

    int dz[6] = {0, 0, 0, 0, 1, -1};
    int dx[6] = {1, 0, -1, 0, 0, 0};
    int dy[6] = {0, 1, 0, -1, 0, 0};

    int main() {

        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        memset(dis, -1, sizeof(dis));
        int M, N, H;
        cin >> M >> N >> H;
        
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < M; k++) {
                    cin >> board[i][j][k];
                }
            }
        }

        queue<tuple<int, int, int>> Q;

        for (int i = 0; i < H; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < M; k++) {
                    if(board[i][j][k] == 1) {
                        Q.push({i, j, k});
                        dis[i][j][k] = 0;
                    }
                }
            }
        }

        while(!Q.empty()) {
            auto [z, x, y] = Q.front();
            Q.pop();
            for (int i = 0; i < 6; i++) {
                int nz = z + dz[i];
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nz < 0 || nz >= H || nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                if(dis[nz][nx][ny] != -1 || board[nz][nx][ny] != 0) continue;
                dis[nz][nx][ny] = dis[z][x][y] + 1;
                board[nz][nx][ny] = 1;
                Q.push({nz, nx, ny});
            }
        }

        int mx = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < M; k++) {
                    if(board[i][j][k] == 0) {
                        cout << - 1 << "\n";
                        return 0;
                    }
                    mx = max(mx, dis[i][j][k]);
                }
            }
        }

        cout << mx << "\n";

        return 0;
    }