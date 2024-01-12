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

ll dp[110][100005];

ll wt[110]; 
ll vl[110]; 

ll fun(ll i, ll value){
    if(value == 0) return 0; 
    if(i < 0) return 1e15;

    if(dp[i][value] != -1) return dp[i][value];
    ll w = fun(i-1, value); 
    if(value - vl[i] >= 0)
    w = min(w, wt[i] + fun(i-1, value - vl[i])); 
    return dp[i][value] = w;
}

void solve(){
    memset(dp, -1, sizeof(dp));
    ll N, W; 
    cin >> N >> W; 
    for(ll i = 0; i < N; i++) cin >> wt[i] >> vl[i];
    for(ll i = 1e5; i >= 0; i--){
        if(fun(N-1, i) <= W){
            cout << i << endl; 
            break; 
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}