#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

void solve(){
    int n;
    cin >> n;
    int c[3] = {0}; 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        c[x % 3]++;
    }
    int ans = 0;
    while (c[0] != n/3 || c[1] != n/3 || c[2] != n/3) {
        for (int i = 0; i < 3; i++) {
            if (c[i] > n/3) {
                c[i]--;
                c[(i+1)%3]++;
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t; 
    while(t--){
        solve(); 
    }
    return 0;
}