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
    }

    for (int i = 1; i <= N ; i++) {
        if (std::abs(data[i][1] - data[i-1][1] + data[i][2] - data[i-1][2]) <= std::abs(data[i][0] - data[i - 1][0])) {
            if (data[i][0] % 2 == 1) {
                if (std::abs(data[i][1] - data[i-1][1] + data[i][2] - data[i-1][2]) % 2 != 1) {
                    YN = false;
                }
            }
            else {
                if (std::abs(data[i][1] - data[i-1][1] + data[i][2] - data[i-1][2]) % 2 != 1) {
                    YN = false;
                }
            }
        }
        else {
            YN = false;
        }
    }
    if (YN == false) cout << "No" << endl;
    else cout << "Yes" << endl;
}
