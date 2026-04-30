#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char board[1002][1002];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int w, h;
    string s;
    while(N--) {
        int dis1[1002][1002];
        int dis2[1002][1002];
        memset(dis1, -1, sizeof(dis1));
        memset(dis2, -1, sizeof(dis2));
        queue<pair<int, int>> Q1;
        queue<pair<int, int>> Q2;
        bool success = false;
        
        cin >> w >> h;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> board[i][j];
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if(board[i][j] == '*') {
                    Q1.push({i, j});
                    dis1[i][j] = 0;
                }

                if(board[i][j] == '@') {
                    Q2.push({i, j});
                    dis2[i][j] = 0;
                }
            }
        }
        while(!Q1.empty()) {
            pair<int, int> cur1 = Q1.front();
            Q1.pop();

            for (int i = 0; i < 4; i++) {
                int nx = dx[i] + cur1.first;
                int ny = dy[i] + cur1.second;

                if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                if(dis1[nx][ny] != -1 || board[nx][ny] == '#') continue;
                dis1[nx][ny] = dis1[cur1.first][cur1.second] + 1;
                Q1.push({nx, ny});
            }
        }
        
        while(!Q2.empty() && !success) {
            pair<int, int> cur2 = Q2.front();
            Q2.pop();

            for (int a = 0; a < 4; a++) {
                int nx = dx[a] + cur2.first;
                int ny = dy[a] + cur2.second;

                if(nx < 0 || nx >= h || ny < 0 || ny >= w) {
                    cout << dis2[cur2.first][cur2.second] + 1 << "\n";
                    success = true;
                    break;
                }
                if(dis2[nx][ny] != -1 || board[nx][ny] == '#') continue;
                if(dis1[nx][ny] != -1 && dis1[nx][ny] <= dis2[cur2.first][cur2.second] + 1) continue;
                dis2[nx][ny] = dis2[cur2.first][cur2.second] + 1;
                Q2.push({nx, ny});
            }
        }
        if(!success) cout << "IMPOSSIBLE" << "\n";
    }

    return 0;
}