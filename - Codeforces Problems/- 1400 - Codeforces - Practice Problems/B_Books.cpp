#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/279/B
/* Approach: */
void solve(){
    ll n, t;
    cin >> n >> t; 
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    ll sum = v[0], ri = 0, ans = 0; 
    for(int i = 0; i < n; i++){
        while(ri < n-1 && sum + v[ri+1] <= t){
            ri++;
            sum += v[ri];
        }
        if(sum <= t) ans = max(ans, ri - i + 1);
        sum -= v[i];
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