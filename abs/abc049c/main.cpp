#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int l = s.size();

    while (l > 0) {
        if (l >= 7 && s.substr(l-7, 7) == "dreamer") l -= 7;
        else if (l >= 6 && s.substr(l-6, 6) == "eraser") l -= 6;
        else if (l >= 5 && s.substr(l-5, 5) == "dream") l -= 5;
        else if (l >= 5 && s.substr(l-5, 5) == "erase") l -= 5;
        else break;
    }

    if (l == 0) cout << "YES\n";
    else cout << "NO\n";
}