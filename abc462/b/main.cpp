#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, k, A = 0;
  cin >> n;

  vector<vector<int>> out(n, vector<int>());

  rep(i, n) {
    cin >> k;
    rep(j, k) {
      int tmp = 0;
      cin >> tmp;
      out[tmp - 1].push_back(i + 1);
    }
  }

  rep(i, n) {
    cout << out[i].size();

    rep(j, out[i].size()) {
    cout << " " << out[i][j];
    }
    cout << endl;
  }

}
