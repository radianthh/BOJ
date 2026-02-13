#include <iostream>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    int a = 100 * N;
    if(a >= M) cout << "Yes" << "\n";
    else cout << "No" << "\n";

    return 0;
}