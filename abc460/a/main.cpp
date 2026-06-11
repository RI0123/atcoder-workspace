#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, M,cnt = 0;
    cin >> N >> M;

    for(int i = 0;M != 0;i++) {
        M = N % M;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
