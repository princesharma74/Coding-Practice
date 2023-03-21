#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1793/problem/A
/* Approach: */
void solve(){
    ll a, b, cst = 0; 
    cin >> a >> b; 
    ll n, m; 
    cin >> n >> m; 
    if(n/(m+1)){
        if(m*a < min(a,b)*(m+1)){
            ll g1 = (n/(m+1));
            cst = g1*m*a;
            cst += min(a,b)*(n-g1*(m+1));
        }
        else{
            cst = min(a,b)*n; 
        }
    }
    else{
        cst = min(a,b)*n;
    }
    cout << cst << endl; 
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