#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1795/problem/C
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    vector<ll> a(n), b(n), dkt(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i+j) < n){
                dkt[i+j] += min(a[j], b[i+j]);
                a[j] -= min(a[j], b[i+j]);
            }
        }
    }

    for(int i = 0; i < n; i++) cout << dkt[i] << " \n"[i==n-1];
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