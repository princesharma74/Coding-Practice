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
    ll o = false, e = false; 
    ll mx = 0; 
    for(ll i = 0; i < n; i++){
        cin >> v[i]; 
        mx = max(mx, v[i]);
        if(v[i]&1) o = true;
        else e = true; 
    } 
    ll ans;
    if(o && e){
        ans = 2;
    }
    else{
        for(ll s = 4; s <= 1e17; s *= 2){
            unordered_set<ll> st; 
            for(ll i = 0; i < n; i++){
                st.insert(( v[i]%s ));
            }
            if(st.size() > 1){
                ans = s; 
                break; 
            }
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