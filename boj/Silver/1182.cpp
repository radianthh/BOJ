#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, S, a;
vector<int> v;
int cnt = 0;
void func(int cur, int sum) {
    if(cur == N) {
        if(sum == S) cnt++;
        return;
    }
    func(cur + 1, sum);
    func(cur + 1, sum + v[cur]);
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);       
    }

    func(0, 0);
    if(S == 0) cnt--;
    cout << cnt << "\n";

    return 0;
}