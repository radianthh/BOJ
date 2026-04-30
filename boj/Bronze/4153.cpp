#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

	int x, y, z;

	for (long long i = 0; i < 30000; i++) {
		cin >> x >> y >> z;
		if(x == 0 && y == 0 && z == 0) break;

		int a[3] = {x, y, z};
		sort(a, a+3);
		
		if(a[0]*a[0] + a[1]*a[1] == a[2]*a[2]) cout << "right" << "\n";
		else cout << "wrong" << "\n";

	}


	return 0;
}