#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string &s1, string &s2) {
    return s1 > s2;
}

int main() {

    int N;
    cin >> N;
    string s[20];
    string inc[20];
    string dec[20];


    for (int i = 0; i < N; i++) {
        cin >> s[i];
        inc[i] = s[i];
        dec[i] = s[i];
    }

    sort(inc, inc + N);
    sort(dec, dec + N, cmp);

    int cnt1 = 0;
    int cnt2 = 0;
    for (int j = 0; j < N; j++) {
        if(s[j] == inc[j]) cnt1++;
        if(s[j] == dec[j]) cnt2++;
    }
    if(cnt1 == N) cout << "INCREASING" << "\n";
    else if(cnt2 == N) cout << "DECREASING" << "\n";
    else cout << "NEITHER" << "\n";

    return 0;
}