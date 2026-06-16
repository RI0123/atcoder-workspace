#include <bits/stdc++.h>
using namespace std;
#define N (int)3e+5

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   int N, Q;
//   cin >> N >> Q;

//   vector<int> data(N, 0);
//   vector<int> num(Q, 0);

//   for (int i = 0; i < Q; i++) {
//     int tmp1 = 0, tmp2 = 0;

//     cin >> tmp1 >> tmp2;
//     if (tmp1 == 1) {
//       data[tmp2 - 1]++;
//       // for (int j = 0;j <= cnt;j++) {
//       //   num[j] = std::count_if(data.begin(), data.end(), [j](int x) {
//       return x == j; });
//       // } これはまだ無駄がある。

//         num[data[tmp2 - 1]] = std::count_if(data.begin(), data.end(),
//         [tmp2](int x) { return x == tmp2 - 1; }); num[data[tmp2]] =
//         std::count_if(data.begin(), data.end(), [tmp2](int x) { return x ==
//         tmp2; });
//     }
//     if (tmp1 == 2) {
//       cout << std::reduce(num.begin() + tmp2, num.end(), 0) << endl;
//       // tmp2以上の数の和を計算し、出力

//     }
//     if (num[0] == 0) {
//       std::rotate(num.begin(), num.begin() + 1, num.end());
//       // これ天才
//     }
//   }
// }

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int N, Q;
//   cin >> N >> Q;

//   map<int, int> value;
//   vector<int> data(N, 0);
//   vector<int> over(Q, 0);

//   for(int i = 0; i < Q; i++) {
//     int tmp1, tmp2;
//     cin >> tmp1 >> tmp2;

//     if(tmp1 == 1) {
//       data[tmp2 - 1]++;
//       value[data[tmp2 - 2]]--;
//       value[data[tmp2 - 1]]++;
//     }

//   }
// }

int main(void) {
  int a[N + 1] = {};
  int c[N + 1] = {};
  // 配列を２つ召喚
  // aはdata、cは添字の位置に箱があるマスの数

  int n, q, t, x, mn = 0;
  // n:マス数 q:クエリ数 t:クエリ受け取り x:クエリ引数 mn:最小値

  cin >> n >> q;
  for (int i = 0; i < q; i++) {
    cin >> t >> x;
    if (t == 1) {
      a[x]++;
      c[a[x]]++;
      if (c[a[x]] == n)
        mn = a[x];
    }
    if (t == 2) {
      if (x + mn > q)
        cout << 0 << endl;
      else
        cout << c[x + mn] << endl;
    }
  }
}