#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, a;
vector<int> v;
vector<int> b;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
        
    for(int i = 0; i < n; i++) b.push_back(i < m ? 0 : 1);
    
    do {
        for (int i = 0; i < n; i++) {
            if(b[i] == 0) cout << v[i] << " ";
        }
        cout << "\n";
    } while(next_permutation(b.begin(), b.end()));


    return 0;
}