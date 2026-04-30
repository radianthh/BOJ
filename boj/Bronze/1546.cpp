#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int x;
	cin >> x;
	
	int a[1001];
	int b[1001];
	double c[1001];
	for (int i = 0; i < x; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b+x);

	for (int i = 0; i < x; i++) {
		c[i] = ((double) a[i] / b[x - 1]) * 100;
	}
	double sum = 0;
	for (int i = 0; i < x; i++) {
		sum += c[i];
	}
	cout << (double) sum / x << "\n";

	return 0;
}