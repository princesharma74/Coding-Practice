#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const int N = 1e5 + 7; 

int dp[N]; 

int fun(int i, int k, vector<int> &h){
    if(i == 0) return 0; 
    int mn = INT_MAX;
    for(int j = 1; j <= k; j++){
        if(i-j >= 0)
        mn = min(mn, fun(i-j, k, h) + abs(h[i] - h[i-j]));
    }
    return mn;
}

void solve(){
    memset(dp, -1, sizeof(dp));
    int n, k;
    cin >> n >> k; 
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    vector<int> dp(n+1, 0);
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        int mn = INT_MAX;
        for(int j = 1; j <= k; j++){
            if(i-j >= 0) mn = min(mn, dp[i-j] + abs(h[i] - h[i-j]));
        }
        dp[i] = mn;
    }

    cout << dp[n-1] << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}