#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, D;
    cin >> N >> K >> D;

    // Read the elements of A.
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Initialize the dp array.
    vector<int> dp(N * 100 + 1, 0);

    // Iterate through the elements of A.
    for (int i = 0; i < N; i++) {
        int a = A[i];

        // Update the values in dp.
        for (int j = 0; j <= N * 100; j++) {
            if (dp[j] > 0 && (j + a) % D == 0) {
                dp[j + a] = max(dp[j + a], j + a);
            }
        }
    }

    // Find the maximum value in dp that is a multiple of D.
    int ans = -1;
    for (int i = 0; i <= N * 100; i++) {
        if (dp[i] > 0 && dp[i] % D == 0) {
            ans = max(ans, dp[i]);
        }
    }

    cout << ans << endl;

    return 0;
}
