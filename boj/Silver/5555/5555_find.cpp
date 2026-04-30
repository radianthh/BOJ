#include <iostream>
#include <string>

using namespace std;

int main() {

    string s1, s2;
    int N;

    cin >> s1 >> N;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> s2;
        string s = s2 + s2;
        if(s.find(s1) != string::npos) {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}