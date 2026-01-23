#include <iostream>
#include <string>

using namespace std;

string gcd(int &x1, int &x2) {
    int g = 1;
    string s1, s2;
    for (int i = 1; i <= x2; i++) {
        if(x1 % i == 0 && x2 % i == 0) {
            g = i;
        }
    }
    s1 = to_string(x1 / g);
    s2 = to_string(x2 / g);

    return s1 + '/' + s2;    
}

int main() {

    int N;
    cin >> N;
    int x[100];
    cin >> x[0];
    for (int i = 1; i < N; i++) {
        cin >> x[i];
        cout << gcd(x[0], x[i]) << "\n";
    }

    return 0;
}