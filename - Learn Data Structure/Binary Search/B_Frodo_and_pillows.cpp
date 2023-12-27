#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

bool check(ll l, ll n, ll k, ll m){
    ll g1 = max(0ll, l - k); 
    ll g2 = max(0ll, l - (n - k + 1));
    ll sum = max(0ll, (n-(2*l - 1 - g1 - g2))) + l*l - g1*(g1+1)/2 - g2*(g2+1)/2;
    return sum <= m;
}


void solve(){
    ll n, m, k; 
    cin >> n >> m >> k; 
    ll l = 0, r = 1e9; 
    while(r - l > 1){
        ll mid = (l + r)/2; 
        if(check(mid, n, k, m)) l = mid;
        else r = mid-1;
    }
    if(check(r, n, k, m)) cout << r << endl; 
    else if(check(l, n, k, m)) cout << l << endl; 
    else cout << -1 << endl; 
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}