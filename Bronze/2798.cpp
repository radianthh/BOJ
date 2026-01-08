#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int x, y;
	cin >> x >> y;

	int a[101];
	int max = 0;
	for (int i = 0; i < x; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < x; i++) {
		for (int j = i + 1; j < x; j++) {
			for (int k = j + 1; k < x; k++) {
				if(a[i] + a[j] + a[k] <= y && a[i] + a[j] + a[k] > max) {
					max = a[i] + a[j] + a[k];
				}
			}
		}
	}
	cout << max << "\n";

	return 0;
}