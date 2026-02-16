#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B >> C;
    vector<int> v;
    v.push_back(A);
    v.push_back(B);
    v.push_back(C);

    sort(v.begin(), v.end());

    cout << v[1] << "\n";

    return 0;
}