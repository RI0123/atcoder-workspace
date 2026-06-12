#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll square(ll x) {
    return x * x;
}

int main() {
    ll t, x = 0, y = 0, distance = 0;
    cin >> t;
    vector<vector<ll>> data(t, vector<ll>(6, 0));

    for(int i = 0;i < t; i++) {
        // X1 Y1 R1 X2 Y2 R2
        cin >> data[i][0] >> data[i][1] >> data[i][2] >> data[i][3] >> data[i][4] >> data[i][5];

        // cout << data[i][0] << data[i][1] << data[i][2] << data[i][3] << data[i][4] << data[i][5] << endl;

        x = std::abs(data[i][0] - data[i][3]);
        y = std::abs(data[i][1] - data[i][4]);

        distance = square(x) + square(y);

        if (square(data[i][2] - data[i][5]) <= distance) {
            if(distance <= square(data[i][2] + data[i][5])) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }
    }
}
