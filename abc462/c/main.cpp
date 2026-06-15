#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, cnt = 0;
  cin >> N;
  vector<vector<int>> data(N, vector<int>(2));


  rep(i, N) {
    cin >> data[i][0] >> data[i][1];
  }
    
  std::sort(&data[0], &data[N], [](auto& x, auto& y){return x[0] < y[0];});

  int min = data[0][1];

  for(int i = 0; i < N; i++ ) {
      if(min >= data[i][1]) {
        min = data[i][1];
        cnt++;
      }
  }
  cout << cnt  << endl;
}
