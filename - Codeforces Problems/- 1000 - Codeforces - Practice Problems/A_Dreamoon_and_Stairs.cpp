#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/476/A
/* Approach: */
void solve(){
    int n, m; 
    cin >> n >> m; 
    int cr = n/2 + n%2; 
    int lim = n/2; 
    while(lim--){
        if(cr%m == 0) break; 
        cr++;
    }
    if(cr%m == 0) cout << cr << endl; 
    else cout << -1 << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}