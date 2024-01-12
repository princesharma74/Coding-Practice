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
    ll n, q; 
    cin >> n >> q; 
    vector<ll> v(n+1, 0);
    for(ll i = 1; i <= n; i++){
        cin >> v[i];
        v[i] += v[i-1];
    }
    while(q--){
        ll l, r, k;
        cin >> l >> r >> k; 
        if(( v[n] - (v[r] - v[l-1]) + (r-l+1)*k )&1) cout << "YES" << endl; 
        else cout << "NO" << endl; 
    }
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