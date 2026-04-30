#include <iostream>

using namespace std;


int a[1000001] = {0};
int b[2000001] = {0};
int main() {

	long long N;
	cin >> N;

	for (long long i = 0; i < N; i++) {
		cin >> a[i];
	}
	long long x;
	cin >> x;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		b[a[i]] = 1;
	}
	for (int i = 0; i < 2000001; i++) {
		if(b[i] != 0) {
			if(i < x-i && b[x-i] == 1) {
				cnt++;
			}
		}
	}

	cout << cnt << "\n";
	return 0;
}