#include <iostream>

using namespace std;

int main(void) {

	string input;
	cin >> input;

	double sum = 0.0;
	switch(input[0]) {
		case 'A':
		sum += 4.0;
		break;
		case 'B':
		sum += 3.0;
		break;
		case 'C':
		sum += 2.0;
		break;
		case 'D':
		sum += 1.0;
		break;
		case 'F':
		sum += 0.0;
		break;
	}

	switch(input[1]) {
		case '+':
		sum += 0.3;
		break;
		case '0':
		sum += 0.0;
		break;
		case '-':
		sum += -0.3;
		break;
	}

	cout << fixed;
	cout.precision(1);
	cout << sum << "\n";


	return 0;
}