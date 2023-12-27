#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> magicNumbers;
bool isMagicNumber(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 5) return false;
        num /= 10;
    }
    return true;
}
void generateMagicNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        if (isMagicNumber(i)) magicNumbers.push_back(i);
    }
}
int maxN = 1e6;
vector<int> dp(maxN + 1, INT_MAX);
void precompute(){
    generateMagicNumbers(maxN);
    dp[0] = 0;
    for (int i = 1; i <= maxN; i++) {
        for (int m : magicNumbers) {
            if (i >= m) dp[i] = min(dp[i], dp[i - m] + 1);
        }
    }
}
signed main() {
    int t;
    cin >> t;
    precompute();
    while (t--) {
        int n;
        cin >> n;
        if (dp[n] == INT_MAX) cout << -1 << endl;
        else cout << dp[n] << endl;
    }
    return 0;
}
