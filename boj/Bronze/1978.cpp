#include <iostream>

using namespace std;


int main() {

	int N;
	cin >> N;

	int x;
	int cnt = N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		if(x == 1) {
			cnt--;
		} else if (x == 2) {
			;
		}
		else {
			for (int i = 2; i < x; i++) {
				if (x % i == 0) {
					cnt--;
					break;
				}
			}
		}
	}
	cout << cnt << "\n";


	return 0;
}