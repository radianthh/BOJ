	#include <iostream>
	#include <algorithm>
	#include <cmath>

	using namespace std;

	int main(void) {

		string s1, s2;
		cin >> s1 >> s2;
		int a[1001] = {0};
		int b[1001] = {0};

		for (int i = 0; i < s1.length(); i++) {
			a[s1[i] - 'a']++;
		}
		

		for (int i = 0; i < s2.length(); i++) {
			b[s2[i] - 'a']++;
		}

		int sum = 0;
		for (int i = 0; i < 1001; i++) {
			sum += abs(a[i] - b[i]);
		}

		cout << sum << "\n";

		return 0;
	}