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
    int n, m, k, H; 
    cin >> n >> m >> k >> H;
    vector<int> h(n); 
    for(int i = 0; i < n; i++) cin >> h[i];
    unordered_map<int, int> mp; 
    for(int i = 0; i < n; i++) mp[abs(h[i] - H)]++;
    int ans = 0;
    for(int i = 1; i < m; i++){
        ans += mp[i*k];
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