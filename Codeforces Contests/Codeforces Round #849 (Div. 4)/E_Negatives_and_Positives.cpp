#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1791/problem/E
/* Approach: */
void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll lst = LLONG_MAX;
    ll ans = 0; 
    ll ct_neg = 0; 
    for(ll &it : v){
        cin >> it; 
        ans += abs(it);
        if(it < 0) ct_neg++;
        if(lst > abs(it)) lst = abs(it);
    }
    if(ct_neg&1) ans -= 2*lst;
    cout << ans << endl; 
}

int main(){
    int t;
    cin >> t; 
    while(t--){
        solve(); 
    }
    return 0;
}