#include <iostream>
#include <queue>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dis[100001];
    fill(dis, dis + 100001, -1);

    int N, K;
    cin >> N >> K;

    queue<int> Q;
    Q.push(N);
    dis[N] = 0;

    while(!Q.empty()) {
        int cur = Q.front();
        Q.pop();
        if(cur == K) {
            cout << dis[cur] << "\n";
            return 0;
        }

        int d[3] = {cur - 1, cur + 1, cur * 2};
        for (int i = 0; i < 3; i++) {
            int x = d[i];
            if(x < 0 || x > 100000) continue;
            if(dis[x] != -1) continue;
            dis[x] = dis[cur] + 1;
            Q.push(x);
        }
    }
    return 0;
}