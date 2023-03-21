#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1359/A
/* Approach: */
void solve(){
    int n, m, k;
    cin >> n >> m >> k; 
    int d = n/k; 
    int a1 = min(m, d);
    int a2 = (m - a1 + k - 2)/(k-1);
    cout << (a1 - a2) << endl; 
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