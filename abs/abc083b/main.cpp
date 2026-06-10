#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int GetDigit(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >>B;
    int total = 0;

    for (int i = 1; i <= N;i++) {
        int sum = GetDigit(i);
        if (A <= sum && sum <= B) {
            total += i;
        }
    }
    cout  << total << endl;
}
