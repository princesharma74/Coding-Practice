#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        string res = "";
        for(int i = 9; i >= 1; i--) {
            while(x >= i) {
                x -= i;
                res = char(i + '0') + res;
            }
        }
        if(x > 0) {
            cout << -1 << "\n";
        } else {
            cout << res << "\n";
        }
    }
    return 0;
}
