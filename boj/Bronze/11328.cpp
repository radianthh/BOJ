#include <iostream>

using namespace std;

int main(void) {

	int x;
	cin >> x;

	int cnt = 0;
	string s1, s2;
	for(int i = 0; i < x; i++) {
		int a[26] = {0};
		int b[26] = {0};
		cin >> s1 >> s2;
		for (int j = 0; j < s1.length(); j++) {
			a[s1[j] - 'a']++;
		}

		for (int j = 0; j < s2.length(); j++) {
			b[s2[j] - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if(a[i] != b[i]) cnt = 1;
		}
		if(cnt == 1){
			cout << "Impossible" << "\n";
			cnt = 0;
		} else {
			cout << "Possible" << "\n";
		}
	}

	return 0;
}