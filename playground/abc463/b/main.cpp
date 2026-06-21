#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  char X;
  bool ans = false;
  cin >> N >> X;
  
  vector<vector<char>> data(N, vector<char>(5));

  rep(i, N) {
    cin >> data[i][0] >> data[i][1] >> data[i][2] >> data[i][3] >> data[i][4];
  }

  if (X == 'A') {
    rep(i, N) {
      if (data[i][0] == 'o') {
        ans = true;
        break;
      }
    }
  }
  else if ( X == 'B') {
    rep(i, 5) {
      if (data[i][1] == 'o') {
        ans = true;
        break;
      }
    }
  }
  else if ( X == 'C') {
    rep(i, 5) {
      if (data[i][2] == 'o') {
        ans = true;
        break;
      }
    }
  }
  else if ( X == 'D') {
    rep(i, 5) {
      if (data[i][3] == 'o') {
        ans = true;
        break;
      }
    }
  }
  else  if (X == 'E') {
    rep(i, 5) {
      if (data[i][4] == 'o') {
        ans = true;
        break;
      }
    }
  }
   
  if (ans == true) cout  << "Yes" << endl;
  else cout << "No" << endl;
}
