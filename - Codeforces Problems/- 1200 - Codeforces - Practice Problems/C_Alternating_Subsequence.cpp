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

void solve(){
    ll n; 
    cin >> n; 
    vector<ll> v(n); 
    for(ll i = 0; i < n; i++) cin >> v[i];
    ll ans = 0, mx = v[0]; 
    for(ll i = 1; i < n; i++){
        if(v[i]*v[i-1] < 0){
            ans += mx;
            mx = v[i];
        }
        mx = max(v[i], mx);
    }
    ans += mx; 
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