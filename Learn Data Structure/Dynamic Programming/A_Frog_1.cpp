#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100007;

int dp[N];

int fun(int i, vector<int> &h){
    if(i == 0) return 0; 
    if(i == 1) return abs(h[i] - h[i-1]);
    if(dp[i] != -1) return dp[i];
    return dp[i] = min(( fun(i-1, h) + abs(h[i-1] - h[i]) ), ( fun(i-2, h) + abs(h[i-2] - h[i]) ));
}

void solve(){
    int N; 
    cin >> N;
    vector<int> h(N); 
    for(int i = 0; i < N; i++) cin >> h[i];
    cout << fun(N-1, h) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    memset(dp, -1, sizeof(dp));
    while(t--){
        solve(); 
    }
    return 0;
}