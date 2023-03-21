#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1704/problem/B
/* Approach: */
void solve(){
    ll n, x; 
    cin >> n >> x; 
    vector<ll> a(n);
    ll l = LLONG_MIN, r = LLONG_MAX, ct = 0; 
    for (int i = 0; i < n; i++){ 
        cin >> a[i];
        if(max(a[i] - x, l) <= min(a[i] + x, r)){
            l = max(a[i]-x, l);
            r = min(a[i]+x, r);
        }
        else{
            ct++;
            l = a[i]-x;
            r = a[i]+x;
        }
    }
    cout << ct << endl; 
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