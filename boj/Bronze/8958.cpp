#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    string s;
    int cnt = 0;
    int score = 0;
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if(s[j] == 'X') {
                cnt = 0;
            } else if(s[j] == 'O') {
                cnt++;
                score += cnt;
            }
        }
        cout << score << "\n";
        score = 0;
        cnt = 0;
    }

    return 0;
}