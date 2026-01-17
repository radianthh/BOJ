#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cin >> s;

    bool result = false;
    for (size_t i = 0; i < s.length(); i++) {
        if(s.substr(i, 2) == "pi" || s.substr(i, 2) == "ka") {
            i++;
        } else if(s.substr(i, 3) == "chu") {
            i += 2;
        } else {
            result = true;
            break;
        }
    }
    if(!result) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}