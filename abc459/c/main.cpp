#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> data(N,0);
  
  for(int i = 0;i < Q; i++) {
    int tmp1 = 0, tmp2 = 0;
    cin >> tmp1 >> tmp2;
    if (tmp1 == 1) {
      data[tmp2] += 1;
    }
    else if (tmp1 == 2) {
      // data配列の要素を tmp2 と比較して、tmp2以上だった要素の個数を出力。
      // しかし、上の計算の方法だとfor文が２つ入れ子になってしまい、LTEとなる。
    }
  }
}
