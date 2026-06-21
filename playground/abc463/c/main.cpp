#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> h(n), l(n);
  // {Hight, limit time}

  // 入力を入れる
  rep(i,n) {
    cin >> h[i] >> l[i];
  }

  vector<int> d(n);
  d[n-1] = h[n-1];
  // 最後の人の身長が最大になる

  // それ以外は後ろから考えていく。(n-2)は後ろから２番目の人
  for (int i = n-2; i >= 0; i--) {
    d[i] = max(d[i+1],h[i]);
  }

  int q;
  cin >> q;

  // qiとするのはクエリのループであることをわかりやすくするため
  rep(qi,q) {
    int t;
    cin >> t;

    // 指定した値よりも『大きい』値が、最初に現れる位置を高速に探してくれる関数
    // liに 範囲：「lの始めから終わりまでの範囲で」、「ｔよりも値が大きい、最初の人」
    int li = upper_bound(l.begin(), l.end(), t) - l.begin();
    cout << d[li] << '\n';
  }
  return 0;
}