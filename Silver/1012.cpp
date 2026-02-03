#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int T;
    cin >> T;

    int M, N, K;
    int x, y;
    int cnt;
    while(T--) {
        int board[52][52];
        int vis[52][52];
        memset(board, 0, sizeof(board));
        memset(vis, 0, sizeof(vis));
        queue<pair<int, int>> Q;
        
        cnt = 0;
        cin >> M >> N >> K;
        for (int i = 0; i < K; i++) {
            cin >> x >> y;
            board[x][y] = 1;
        }
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < N; k++) {
                if(board[j][k] == 1 && !vis[j][k]) {
                    vis[j][k] = 1;
                    cnt++;
                    Q.push({j, k});

                    while(!Q.empty()) {
                        pair<int, int> cur = Q.front();
                        Q.pop();
                        
                        for (int a = 0; a < 4; a++) {
                            int nx = cur.first + dx[a];
                            int ny = cur.second + dy[a];

                            if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
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