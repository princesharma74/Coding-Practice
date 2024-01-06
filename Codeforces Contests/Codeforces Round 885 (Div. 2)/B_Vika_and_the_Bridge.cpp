#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> colors(n);
        for (int i = 0; i < n; ++i)
            cin >> colors[i];

        int ans = n;
        for (int c = 1; c <= k; ++c) {
            int cnt = 0, max_cnt = 0;
            for (int i = 0; i < n; ++i) {
                if (colors[i] == c) {
                    ++cnt;
                    max_cnt = max(max_cnt, cnt);
                }
                else
                    cnt = 0;
            }
            ans = min(ans, max_cnt);
        }

        cout << ans << endl;
    }

    return 0;
}
