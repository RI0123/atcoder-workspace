#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  string data;
  char first;

  rep(i, N) {
    cin >> data;
    first = data[0];
    if (first == 'a' || first == 'b' || first == 'c' ) cout << 2;
    else if (first == 'd' || first == 'e' || first == 'f' ) cout << 3;
    else if (first == 'g' || first == 'h' || first == 'i' ) cout << 4;
    else if (first == 'j' || first == 'k' || first == 'l' ) cout << 5;
    else if (first == 'm' || first == 'n' || first == 'o' ) cout << 6;
    else if (first == 'p' || first == 'q' || first == 'r' || first == 's' ) cout << 7;
    else if ( first == 't' || first == 'u' || first == 'v') cout << 8;
    else if (first == 'w' || first == 'x' || first == 'y'  || first == 'z') cout << 9;
  }
  cout << endl;
}
