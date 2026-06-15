#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    string data = "HelloWorld";

    rep(i,10) {
      if(i == N -1) {
        continue;
      }
      else {
        cout << data[i];
      }
    }
}
