#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int x;
	cin >> x;
	int a[6];

	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}
	int y, z;
	cin >> y >> z;

	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		if (a[i] == 0) {
			continue;
		} else if(a[i] <= y) {
			cnt++;
		} else if((a[i] % y) == 0) {
			cnt += (a[i] / y);
		} else if((a[i] % y) != 0) {
			cnt += ((a[i] / y) + 1);
		}
	}
	cout << cnt << "\n";

	cout << x / z << " " <<  x - (z * (x / z));

	return 0;
}