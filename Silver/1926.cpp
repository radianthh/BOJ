#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int vis[502][502];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n, m;
    cin >> n >> m;

    queue<pair<int, int>> Q;

    int board[502][502];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x;
            board[i][j] = x;
        }
    }

    int cnt = 0;
    int area = 0;
    int mx = 0;
    for (int k = 0; k < n; k++) {
        for (int e = 0; e < m; e++) {
            if(!vis[k][e] && board[k][e] == 1) {
                cnt++;
                vis[k][e] = 1;
                Q.push({k, e});

                area = 0;
                while(!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    area++;

                    for (int a = 0; a < 4; a++) {
                        int nx = cur.first + dx[a];
                        int ny = cur.second + dy[a];

                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if(vis[nx][ny] || board[nx][ny] != 1) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
                mx = max(mx, area);
            } else continue;
        }
    }

    cout << cnt << "\n" << mx << "\n";

    return 0;
}