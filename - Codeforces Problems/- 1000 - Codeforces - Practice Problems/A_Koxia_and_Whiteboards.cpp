#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1770/A
/* Approach: */
void solve(){
    int n, m; 
    cin >> n >> m; 
    vector<ll> A(n+m); 
    for(int i = 0; i < (n+m); i++) cin >> A[i];
    sort(A.begin(), A.end() - 1);
    reverse(A.begin(), A.end());
    ll sum = 0; 
    for(int i = 0; i < n; i++) sum += A[i];
    cout << sum << endl; 
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