#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, cnt = 0;
    cin >> N;

    string S;
    rep(i, N) {
        cin >> S;
        if (S == "Takahashi") {
            cnt++;
        }
    }
    cout << cnt << endl;
}
