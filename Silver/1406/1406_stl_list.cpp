#include <iostream>
#include <list>

using namespace std;

int main(void) {

	string input;
	cin >> input;

	list<char> L;
	for (auto c : input) {
		L.push_back(c);
	}

	int x;
	cin >> x;
	auto cursor = L.end();

	while(x--) {
		char op;
		cin >> op;
		if(op == 'P') {
			char p;
			cin >> p;
			L.insert(cursor, p);
		} else if (op == 'L') {
			if(cursor != L.begin()) cursor--;
		} else if (op == 'D') {
			if(cursor != L.end()) cursor++;
		} else {
			if(cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
	}
	for (auto c : L) {
		cout << c;
	}
	cout << "\n";

	return 0;
}