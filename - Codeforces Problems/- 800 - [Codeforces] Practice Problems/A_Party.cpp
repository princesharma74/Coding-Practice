#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> manager(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> manager[i];
    }

    int max_depth = 0;
    for (int i = 1; i <= n; i++) {
        int depth = 1;
        int current_employee = i;
        while (manager[current_employee] != -1) {
            depth++;
            current_employee = manager[current_employee];
        }
        max_depth = max(max_depth, depth);
    }

    cout << max_depth << endl;

    return 0;
}
