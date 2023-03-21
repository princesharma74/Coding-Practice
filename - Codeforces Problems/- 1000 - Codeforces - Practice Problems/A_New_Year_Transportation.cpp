#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/500/A
/* Approach: */
void solve(){
    int n, t; 
    cin >> n >> t; 
    vector<int> v(n+1, 0);
    for(int i = 1; i <= n; i++) cin >> v[i];
    int i = 1;
    while(i <= n){
        if (i == t){ 
            cout << "YES" << endl;
            return; 
        }
        else if((i+v[i]) <= t) i += v[i];
        else{
            cout << "NO" << endl; 
            return;
        }
    }
    cout << "NO" << endl; 
    return; 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}