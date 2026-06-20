    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    #define rep(i, n) for (int i = 0; i < (int)(n); i++)

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string S;
        int cnt = 0;
        cin >> S;

        rep(i, S.size()) {
            if(S[i] == 'C') {
                if (i < S.size() - i - 1) {
                    // cout << "半分以下" << endl;
                    cnt += i + 1;
                    //cout << cnt << endl;
                }
                else if (i == S.size() - i - 1) {
                    // cout << "真ん中" << endl;
                    cnt += i + 1;
                    // cout << cnt << endl;
                }
                else {
                    // cout << "半分以上" << endl;
                    cnt += S.size() - i;
                    //cout << cnt << endl;
                }
            }
        }
        cout << cnt  << endl;
    }
