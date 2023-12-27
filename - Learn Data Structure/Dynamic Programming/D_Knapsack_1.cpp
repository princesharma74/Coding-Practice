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

ll dp[110][100010];

ll max_value(ll i, ll wt, vector<pair<ll, ll>> &wv){
    if(dp[i][wt] != -1) return dp[i][wt];

    if(i == wv.size()) return 0; 

    ll ans = 0; 
    if(wt - wv[i].first >= 0){
        ans = max(ans, max_value(i+1, wt - wv[i].first, wv) + wv[i].second); 
    }

    ans = max(max_value(i+1, wt, wv), ans); 
    return dp[i][wt] = ans; 
}

void solve(){
    memset(dp, -1, sizeof(dp));
    ll N, W; 
    cin >> N >> W; 

    vector<pair<ll, ll>> wv(N); 
    for(ll i = 0; i < N; i++){
        cin >> wv[i].first >> wv[i].second; 
    }
    cout << max_value(0, W, wv) << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}