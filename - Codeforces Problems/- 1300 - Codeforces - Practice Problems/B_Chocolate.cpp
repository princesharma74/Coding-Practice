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
    ll ans = 0, lst = -1; 
    for(ll i = 0; i < n; i++){
        ll tmp; 
        cin >> tmp; 
        if(tmp == 1){
            if(lst == -1) ans = 1; 
            else ans *= (i - lst); 
            lst = i; 
        } 
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