#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, cnt = 1;
    cin >> n;
    vector<int> d(n + 1);

    rep(i, n) {
        cin >> d[i];
    }

    sort(d.begin(),d.end());
    reverse(d.begin(),d.end());

    rep(i,n) {
        if (d[i+1] != 0) {
            if (d[i] != d[i+1]) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
