#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int dx[8] = {2, 2, 1, -1, -2, -2, -1, 1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int N;
    cin >> N;
    while(N--) {
        int dis[302][302];
        memset(dis, -1, sizeof(dis));
        queue<pair<int, int>> Q;

        int l;
        cin >> l;
        int x, y;
        pair<int, int> p1[2];
        for (int i = 0; i < 2; i++) {
            cin >> x >> y;
            p1[i].first = x;
            p1[i].second = y;
        }

        dis[p1[0].first][p1[0].second] = 0;
        Q.push({p1[0].first, p1[0].second});

        while(!Q.empty()) {
            pair<int, int> cur = Q.front();
            Q.pop();
            if(cur.first == p1[1].first && cur.second == p1[1].second) {
                cout << dis[p1[1].first][p1[1].second] << "\n";
            }

            for (int k = 0; k < 8; k++) {
                int nx = cur.first + dx[k];
                int ny = cur.second + dy[k];

                if(nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
                if(dis[nx][ny] != -1) continue;
                dis[nx][ny] = dis[cur.first][cur.second] + 1;
                Q.push({nx, ny});
            }
        }
    }

    return 0;
}