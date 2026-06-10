#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, A = 0, B = 0;
    cin >> N;
    vector<int> in(N);

    rep(i, N) {
        cin >> in[i];
    }
    
    sort(in.begin(), in.end());
    reverse(in.begin(), in.end());

    for(int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            A += in[i];
        }
        else {
            B += in[i];
        }
    }
    if ( A < B) {
        cout << B - A << endl;
    }
    else {
        cout << A - B << endl;
    }
}
