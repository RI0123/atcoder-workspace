#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);

    rep(i, N) {
        cin >> A[i];
    }
    rep(i, M) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int j = 0, cnt = 0;

        rep(i,N) {
            if(j < M && B[j] <= A[i] * 2) {
                cout << B[j] << " <= " << A[i] * 2 << endl;
                cnt++;
                j++;
            }
        }

    cout << cnt << endl;
}
