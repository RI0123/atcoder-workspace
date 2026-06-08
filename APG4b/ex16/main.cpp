#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<int> data(5);
    int yes = 0;
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // 1.ループを使わないで考える
    // 1. data[0] を見て data[1] と同じかどうかみる
    // 2. data[1] を見て data[2] と同じかどうかみる
    // .....
    // もし == なら breakする
    rep(i, data.size()) {
        if (data[i] == data[i + 1]) {
            cout << "YES" << endl;
            yes++;
            break;
        }
    }
    if (yes == 0) {
        cout << "NO" << endl;
    }
}
