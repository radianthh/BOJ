#include <iostream>
#include <cmath>
using namespace std;

bool is_prime[1000001];
int main() {

	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int M, N;
    cin >> M >> N;

	is_prime[1] = 1;
	for (int i = 2; i <= sqrt(N); i++){
		if(is_prime[i] != 0) continue;
		for (int j = i * i; j <= N; j += i) {
			is_prime[j] = 1;
		}
	}

	for (int k = M; k <= N; k++) {
		if(is_prime[k] == 0) cout << k << "\n";
	}
	return 0;
}