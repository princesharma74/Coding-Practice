#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1721/B
/* Approach: */
void solve(){
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d; 
    if(( sx + d >= n && sx - d <= 1 ) || ( sy - d <= 1 && sx - d <= 1 ) || ( sx + d >= n && sy + d >= m ) || ( sy + d >= m && sy - d <= 1 )) cout << -1 << endl; 
    else cout << ( (n-1) + (m-1) ) << endl; 
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