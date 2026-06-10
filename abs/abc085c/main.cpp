#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, Y;
  cin >> N >> Y;

  int x = -1,y = -1,z = -1,total = 0;

  for (int i = 0;i <= N;i++) {
    for (int j = 0; i + j <= N; j++) {
        int k = N - i - j;
        total = 10000 * i + 5000 * j + 1000 * k;
        if (total == Y) {
            x = i;
            y = j;
            z = k;
        }
    }
  }
  cout << x << " " << y << " " << z << endl; 
}
