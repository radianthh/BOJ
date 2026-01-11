#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long long A, B, V;

    cin >> A >> B >> V;

    long long sum = 0;
    if(A == V) {
        cout << 1 << "\n";
    } else if(abs(A-B) == 1) {
        cout << (V / abs(A-B)) - B << "\n";
    } else {
        for (int i = 1; i <= 1000000000; i++) {
            sum += A;
            if(sum >= V) {
                cout << i << "\n";
                return 0;
            }
            sum -= B;
            i++;
            sum += A;
            if(sum >= V) {
                cout << i << "\n";
                return 0;
            }
            sum -= B;
        }
    }

    return 0;
}