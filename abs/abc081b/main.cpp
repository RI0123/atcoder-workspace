#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, count = 0, stop = 0, tmp = 0;
    cin >> N;
    vector<int> A(N);

    rep(i, N) {
        cin >> A[i];
    }

    for(int i = 0; stop < 1;i++ ) {
        if (A[i] % 2 == 0) {
            A[i] /= 2;
            tmp++;
            if (tmp == N) {
                tmp = 0;
            }
        }
        else {
            stop++;
        }
        if (i == N - 1) {
            i = 0;
            count++;
        }
    }
    cout << count <<  endl;
}
