#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1139/B
/* Approach: */
void solve(){
    int n; 
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    ll curr = v[n-1];
    ll sum = curr; 
    for(int i = n-2; i >= 0; i--){
        if(v[i] >= curr) v[i] = max(curr-1, 0ll);
        sum += v[i];
        curr = v[i];
    }
    cout << sum << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}