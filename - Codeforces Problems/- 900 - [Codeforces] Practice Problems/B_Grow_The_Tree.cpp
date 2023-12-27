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
    ll n;
    cin >> n; 
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    ll x = 0, y = 0;
    for(ll i = 0; i < n/2; i++){
        y += v[i];
        x += v[n-1-i];
    }
    if(n&1) x += v[n/2];
    cout << x*x + y*y << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}