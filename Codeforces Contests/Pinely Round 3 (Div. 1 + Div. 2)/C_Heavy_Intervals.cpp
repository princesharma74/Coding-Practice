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
    vector<ll> c(n); 
    vector<pair<ll, char>> v; 
    for(ll i = 0; i < n; i++){
        ll l; 
        cin >> l;
        v.push_back({l, '('}); 
    }
    for(ll i = 0; i < n; i++){
        ll r; 
        cin >> r; 
        v.push_back({r, ')'});
    }
    for(ll i = 0; i < n; i++) cin >> c[i]; 
    sort(v.begin(), v.end());

    vector<pair<char, ll>> st; 
    vector<ll> dif;
    for(ll i = 0; i < 2*n; i++){
        if(v[i].second == '(') st.push_back({'(', v[i].first});
        else{
            dif.push_back(v[i].first - st.back().second);
            st.pop_back();
        }
    }
    sort(dif.begin(), dif.end());
    sort(c.rbegin(), c.rend());
    ll ans = 0; 
    for(ll i = 0; i < n; i++){
        ans += (c[i]*dif[i]);
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