#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  vector<char> ch(s.size());

  rep(i, s.size()) {
    ch[i] = s[i];
    // cout << "AAA" << ch[i] << endl;
    if (std::isdigit(ch[i])) {
      cout << ch[i];
    }
  }  
  cout << endl;
}
