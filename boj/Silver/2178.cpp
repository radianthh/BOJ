#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int board[502][502];
    int dis[502][502];
    memset(dis, -1, sizeof(dis));

    queue<pair<int, int>> Q;

    string s;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        for (int j = 1; j <= m; j++) {
            board[i][j] = s[j - 1] - '0';
        }
    }

    dis[1][1] = 1;
    Q.push({1, 1});

    while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];

            if(nx < 1 || nx > n || ny < 1 || ny > m) continue;
            if(dis[nx][ny] != -1 || board[nx][ny] != 1) continue;
            dis[nx][ny] = dis[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }

    cout << dis[n][m] << "\n";

    return 0;
}