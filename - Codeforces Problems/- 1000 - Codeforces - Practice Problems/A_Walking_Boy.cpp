#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1776/problem/A
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    vector<int> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];
    v.push_back(1440);
    int ct = 0; 
    bool ans = false; 
    int prev = 0; 
    for(int i = 0; i < n + 1; i++){
        if (v[i] - prev >= 120){
            ct+=( (v[i] - prev)/120 );
        }
        if(ct > 1){
            ans = true; 
            break; 
        }
        prev = v[i];
    }
    cout << (ans ? "YES" : "NO") << endl; 
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