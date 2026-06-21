#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N ,max = 0;
  cin >> N;
  vector<vector<int>> data(N, vector<int>(2));
  // data {身長, x分後にいない}

  for ( int i = 0; i < N;i ++) {
    cin >> data[i][0] >> data[i][1];
  }

  std::sort(&data[0], &data[N], [](auto& x, auto& y){return x[0] > y[0];});


  int Q;
  cin >> Q;

  vector<int> queri(Q);
  rep (i, Q) {
    cin >> queri[i];

  }

}