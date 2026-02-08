#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    char board[102][102];
    int vis[102][102];
    
    char board1[102][102];
    int vis1[102][102];

    int N;
    cin >> N;

    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < N; j++) {
            board[i][j] = s[j];
            board1[i][j] = s[j];
        }
    }

    for (int c = 0; c < N; c++) {
        for (int d = 0; d < N; d++) {
            if(board1[c][d] == 'G') board1[c][d] = 'R';
        }
    }

    queue<pair<int, int>> Q;
    queue<pair<int, int>> Q1;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int k = 0; k < N; k++) {
        for (int e = 0; e < N; e++) {
            if(board[k][e] == 'R' && vis[k][e] != 1) {
                cnt1++;
                Q.push({k, e});
                vis[k][e] = 1;

                while(!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int a = 0; a < 4; a++) {
                        int nx = cur.first + dx[a];
                        int ny = cur.second + dy[a];

                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(board[nx][ny] != 'R' || vis[nx][ny]) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            } else if(board[k][e] == 'G' && vis[k][e] != 1) {
                cnt1++;
                Q.push({k, e});
                vis[k][e] = 1;

                while(!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int a = 0; a < 4; a++) {
                        int nx = cur.first + dx[a];
                        int ny = cur.second + dy[a];

                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(board[nx][ny] != 'G' || vis[nx][ny]) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            } else if(board[k][e] == 'B' && vis[k][e] != 1) {
                cnt1++;
                Q.push({k, e});
                vis[k][e] = 1;

                while(!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();

                    for (int a = 0; a < 4; a++) {
                        int nx = cur.first + dx[a];
                        int ny = cur.second + dy[a];

                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(board[nx][ny] != 'B' || vis[nx][ny]) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            } if(board1[k][e] == 'R' && vis1[k][e] != 1) {
                cnt2++;
                Q1.push({k, e});
                vis1[k][e] = 1;

                while(!Q1.empty()) {
                    pair<int, int> cur = Q1.front();
                    Q1.pop();
                    Q1.pop();

                    for (int a = 0; a < 4; a++) {
                        int nx = cur.first + dx[a];
                        int ny = cur.second + dy[a];

                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(board1[nx][ny] != 'R' || vis1[nx][ny]) continue;
                        vis1[nx][ny] = 1;
                        Q1.push({nx, ny});
                    }
                }
            } if(board1[k][e] == 'B' && vis1[k][e] != 1) {
                cnt2++;
                Q1.push({k, e});
                vis1[k][e] = 1;

                while(!Q1.empty()) {
                    pair<int, int> cur = Q1.front();
                    Q1.pop();

                    for (int a = 0; a < 4; a++) {
                        int nx = cur.first + dx[a];
                        int ny = cur.second + dy[a];

                        if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                        if(board1[nx][ny] != 'B' || vis1[nx][ny]) continue;
                        vis1[nx][ny] = 1;
                        Q1.push({nx, ny});
                    }
                }
            }
        }
    }
    cout << cnt1 << " " << cnt2 << "\n";
    return 0;
}