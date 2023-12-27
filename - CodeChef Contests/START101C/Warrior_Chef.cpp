#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

bool check(ll x, ll h, vector<ll> &v, ll n){
    for(ll i = 0; i < n; i++){
        if(v[i] > x){
            if(h - v[i] <= 0) return false;
            else h -= v[i];
        }
    }
    return true; 
}

void solve(){
    ll n, h; 
    cin >> n >> h; 
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i]; 
    ll l = 0, r = 1e5; 
    while(r-l > 1){
        ll m = (l + r)/2; 
        if(check(m, h, v, n)) r = m; 
        else l = m+1;
    }
    if(check(l, h, v, n)) cout << l << endl; 
    else if(check(r, h, v, n)) cout << r << endl; 
    else cout << -1 << endl; 
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