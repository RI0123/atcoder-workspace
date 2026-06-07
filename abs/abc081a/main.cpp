#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string origin;
    cin >> origin;
    int count = 0;

    rep(i, origin.size()) {
        if (origin.at(i) == '1') {
            count++;
        }
    }
    cout << count << endl;
}
