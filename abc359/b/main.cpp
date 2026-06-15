#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<int> data(N*2);
    rep(i, N*2) cin >> data[i];

    int cnt = 0;
    rep(i, N*2 -2) {
        if(data[i] == data[i+2]) {
            cnt++;
        }
    }
    cout << cnt << endl;
}
