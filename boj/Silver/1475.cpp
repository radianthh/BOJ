	#include <iostream>
	#include <algorithm>

	using namespace std;

	int main(void) {

		string N;
		cin >> N;

		int set[10] = {0};

		for(int i = 0; i < N.size(); i++) {
			set[int(N[i] - '0')]++;
		}
		int set_sum = set[6] + set[9];

		int sum = 0;
		for(int i = 0; i < 10; i++) {
			if(i == 6 || i == 9) continue;
			else sum = max(sum, set[i]);
			sum = max(sum, ((set_sum+1)/2));
		}

		cout << sum << "\n";


		return 0;
	}