#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, W;
    cin >> H >> W;
    vector<vector<int>> data(H, vector<int>(W, 0));

    rep(i, H) {
        rep(j, W) {
            // if(H == 1 && W == 1) {
            //     cout << 0 << endl;
            //     break;
            // }
            // if(i == 0 || i == H - 1 || j == 0 || j == W - 1) {
            //     data
            // }
            // if(i == 0 && j == 0 || i == 0 && j == W -1 || i == H - 1 && j == 0 || i == H - 1 && j == W -1 ) {
                
            // }

            if (i-1 >= 0) data[i][j]++;
			if (i+1 <  H) data[i][j]++;
			if (j-1 >= 0) data[i][j]++;
			if (j+1 <  W) data[i][j]++;

            cout << data[i][j];
            if(j != W - 1) {
                cout << " ";
            }
            else {
                cout << endl;
            }
        }
    }
}
