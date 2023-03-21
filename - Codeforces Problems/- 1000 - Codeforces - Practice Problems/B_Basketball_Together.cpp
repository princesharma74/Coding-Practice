#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int upper_bound(int mx_ele, int d){
    int L = 1, R = mod, m; 
    while(R - L > 0){
        m = (R + L)/2;
        if(mx_ele > d/m) R = m; 
        else L = m + 1; 
    }
    if(mx_ele > d/L) return L; 
    else if(mx_ele > d/R) return R; 
    return m; 
}

//Problem Link: https://codeforces.com/problemset/problem/1725/B
/* Approach: */
void solve(){
    ll n, d; 
    cin >> n >> d; 
    vector<ll> v(n);
    for(ll &it : v) cin >> it;
    sort(v.begin(), v.end());

    ll ans = 0; 
    auto mx_it = v.end() - 1;
    ll k = upper_bound(*mx_it, d);
    while(n-k >= 0 && n != 0){
        ans++;
        n -= k;
        if(!n) break; 
        else mx_it--; 
        k = upper_bound(*mx_it, d);
    }
    cout << ans << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}