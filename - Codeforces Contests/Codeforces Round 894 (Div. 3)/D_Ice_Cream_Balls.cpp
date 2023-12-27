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
    ll l = 0, r = 1e10; 
    while(r - l > 1){
        ll m = (l + r)/2; 
        if(n >= ( m*(m-1)/2 )) l = m; 
        else r = m-1;
    }
    if(n >= ( r*(r-1)/2 )) cout << r + (n - (r*(r-1)/2)) << endl; 
    else if(n >= ( l*(l-1)/2 )) cout << l + (n - (l*(l-1)/2)) << endl;
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