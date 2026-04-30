#include <iostream>
#include <queue>

using namespace std;

int dis[100001];
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fill(dis, dis + 100001, -1);
    queue<int> Q;
    int N, K;
    cin >> N >> K;

    Q.push(N);
    dis[N] = 0;

    while(!Q.empty()) {
        int cur = Q.front();
        Q.pop();

        if(cur == K) {
            cout << dis[cur] << "\n";
            return 0;
        }

        int d[3] = {cur * 2, cur - 1, cur + 1};
        for (int i = 0; i < 3; i++) {
            int nxt = d[i];
            if(nxt < 0 || nxt >= 100001) continue;
            if(dis[nxt] != -1) continue;
            if(i == 0) dis[nxt] = dis[cur];
            else dis[nxt] = dis[cur] + 1;
            Q.push(nxt);
        }
    }

    return 0;
}