#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string S;
    cin >> S >> N;

    std::vector<char> out(S.size()- N*2);

    for (int i = 0; i < S.size()-N*2 ; i++) {
        cout << S[N + i];
    }
    cout << "\n";
}
