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
    ll ans = INT_MIN; 
    ll n; 
    cin >> n; 
    for(ll i = 1; i < 50; i++){
        for(ll j = i; j < 50; j++){
            bool found = true;
            for(ll l = i; l <= j; l++){
                if(n%l){
                    found = false; 
                    break; 
                }
            }
            if(found) ans = max(ans, (j - i+1)); 
        }
    }
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