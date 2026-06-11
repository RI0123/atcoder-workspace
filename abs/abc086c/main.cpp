#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    bool YN = true;
    cin >> N;
    vector<vector<int>> data(N + 1, vector<int>(3, 0));

    for(int i = 1; i < N + 1; i++) {
        cin >> data[i][0] >> data[i][1] >> data[i][2];
        // cout << data[i][0] << " " << data[i][1] << " " << data[i][2] << " : " << i << endl;
    }

    for (int i = 1; i <= N ; i++) {
        if (data[i][0] % 2 == 1) {
            if (std::abs(data[i][1] - data[i-1][1] + data[i][2] - data[i-1][2]) % 2 != 1) {
                // 奇数回目の話で前回との差が偶数のとき : no
                YN = false;
            }
        }
        else {
            // 偶数回目の話で前回との差が奇数のとき : no
            if (std::abs(data[i][1] - data[i-1][1] + data[i][2] - data[i-1][2]) % 2 != 1) {
                YN = false;
            }
        }
    }
    if (YN == false) cout << "No" << endl;
    else cout << "Yes" << endl;
}
