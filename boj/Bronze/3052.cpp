#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int x;
	int a[42] = {0};
	for (int i = 0; i < 10; i++) {
		cin >> x;
		a[x % 42]++;
	}
	int cnt = 0;
	for (int i = 0; i <= 41; i++) {
		if(a[i] > 0) cnt++;
	}
	cout << cnt << "\n";

	return 0;
}