#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/467/B
/* Approach: */
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> plyrs(m+1);
    for(int i = 0; i < (m+1); i++) cin >> plyrs[i];
    int fd = plyrs[m];
    int ans = 0; 
    for(int i = m-1; i >= 0; i--){
        int _1ct = __builtin_popcount(fd^plyrs[i]);
        if(_1ct <= k) ans++;
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