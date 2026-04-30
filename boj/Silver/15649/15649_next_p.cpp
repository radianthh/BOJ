#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> v;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;
  for (int i = 0; i < N; i++) v.push_back(i + 1);
  do {
    for (int i = 0; i < M; i++) {
      cout << v[i] << " ";
    }
    cout << "\n";
    reverse(v.begin() + M, v.end());
  } while(next_permutation(v.begin(), v.end()));

  return 0;
}