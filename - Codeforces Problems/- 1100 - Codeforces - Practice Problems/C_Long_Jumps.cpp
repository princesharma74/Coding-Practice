#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1472/C
/* Approach: */
void solve(){
    ull n; 
    cin >> n; 
    vector<ull> a(n);
    vector<ull> wt(n, (ull) 0);
    ull ans = n; 
    for(ull i = 0; i < n; i++){
        cin >> a[i];
        if(i+a[i] < n) wt[i+a[i]] = max(wt[i + a[i]], ( wt[i] + a[i] ));
        else ans = max(ans, (a[i]+wt[i]));
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