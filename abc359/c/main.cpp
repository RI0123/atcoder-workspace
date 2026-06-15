#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// int main() {
//     vector<int64_t> now(2);
//     cin >> now[0] >> now[1];
//     vector<int64_t> end(2);
//     cin >>end[0] >> end[1];

//     bool arrive = false;
//     bool left = false;
//     if (now[0] % 2 == 1) left = true;
//     int64_t cnt = 0;

//     while (arrive == false) {
//         if(now[0] != end[0] && left == true) {
//             if(now[0] < end[0]) now[0] += 1;
//             else now[0] -= 1;
//             left = false;
//         }
//         else if (now[1] == end[1] && now[0] != end[0] && left == false) {
//             if(now[0] < end[0]) now[0] += 1;
//             else now[0] -= 1;
//             cnt++;
//             left = true;
//         }
        
//         if(now[1] != end[1]) {
//             if(now[1] < end[1]) now[1] += 1;
//             else now[1] -= 1;
//             left = true;
//             cnt++;
//         }
//         if(now[0] == end[0] && now[1] == end[1]) arrive = true;
//     }
//     cout << cnt << endl;
// }

int main() {
    long Sx, Sy, Tx, Ty;
    cin >> Sx >> Sy >> Tx >> Ty;
    // タイルの左側に寄せておく
    if ((Sx + Sy) % 2 == 1) {
        --Sx;
    }
    if ((Tx + Ty) % 2 == 1) {
        --Tx;
    }
    // 答えは (|Sy - Ty| + max(|Sx - Tx|, |Sy - Ty|)) / 2
    long Dx = abs(Sx - Tx);
    long Dy = abs(Sy - Ty);
    
    cout << (Dy + max(Dx, Dy)) / 2 << endl;
    return 0;
}
