#include <iostream>
using namespace std;

int n, m;
int arr[12];
int cnt = 0;
bool isThere = false;
void func(int depth, int sum) {
    if(isThere) return;
    if(sum == n) {
        cnt++;
        if(cnt == m) {
            isThere = true;
            for (int i = 0; i < depth; i++) {
                if(i != depth - 1) cout << arr[i] << "+";
                else cout << arr[i];
            }
            cout << "\n";
        }
        return;
    }
    if(sum > n) return;
    for(int j = 1; j <= 3; j++) {
        arr[depth] = j;
        func(depth + 1, sum + j);
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    func(0, 0);
    if(!isThere) cout << -1 << "\n";

    return 0;
}