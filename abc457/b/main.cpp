#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<vector<int>> data(N, vector<int>());

    rep(i, N) {
        int L;
        cin >> L;
        rep(j, L) {
            int tmp = 0;
            cin >> tmp;
            data[i].push_back(tmp);
        }
    }

    int X, Y;
    cin >> X >> Y;
    cout << data[X - 1][Y - 1] << endl;
}
