#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<pair<int, int>> operations;
        int k = 0;

        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                operations.push_back({i, i + 1});
                k++;
                a[i] += a[i + 1];
            }
        }

        cout << k << endl;
        for (auto op : operations) {
            cout << op.first << " " << op.second << endl;
        }
    }

    return 0;
}
