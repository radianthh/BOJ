#include <iostream>
#include <cmath>

using namespace std;

int main() {

    long long A, B, V;

    cin >> A >> B >> V;

    long long day = 1;
    day += (V - A) / (A - B);
    if(((V - A) % (A - B)) != 0) day++;
    if(A >= V) day = 1;
    
    cout << day << "\n";

    return 0;
}