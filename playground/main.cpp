#include <bits/stdc++.h>
using namespace std;

int g(int &x) {
  x = x * 2;  // xを2倍 (参照によって"呼び出す側の変数"が変更される)
  return x;
}

int main() {
  int a = 3;  // 関数を呼び出す側の変数
  int c = 5;
  int b = g(a);  // xの参照先がaになる
  int d = g(c);
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "d: " << d << endl;
}
