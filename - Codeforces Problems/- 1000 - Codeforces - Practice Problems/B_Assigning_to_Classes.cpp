#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1300/B
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    vector<ll> v(2*n);
    for(ll &it : v) cin >> it; 
    sort(v.begin(), v.end());
    cout << abs(v[n-1] - v[n]) << endl; 
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