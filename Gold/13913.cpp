#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int dis[100001];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(dis, -1, sizeof(dis));
    int N, K;
    cin >> N >> K;

    queue<int> Q;
    dis[N] = 0;
    Q.push(N);
    int prev[100001]; 
    int ev[100001];

    while(!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        if(cur == K) {
            cout << dis[cur] << "\n";
            int index = dis[cur];
            for (int i = 0; i <= index; i++) {
                ev[i] = cur;
                cur = prev[cur];
            }
            for (int i = index; i >= 0; i--) {
                cout << ev[i] << " ";
            }
            return 0;
        }

        int d[3] = {cur * 2, cur + 1, cur - 1};
        for (int i = 0; i < 3; i++) {
            int nx = d[i];

            if(nx < 0 || nx > 100000) continue;
            if(dis[nx] != -1) continue;
            dis[nx] = dis[cur] + 1;
            Q.push(nx);
            prev[nx] = cur;
        }
    }

    return 0;
}