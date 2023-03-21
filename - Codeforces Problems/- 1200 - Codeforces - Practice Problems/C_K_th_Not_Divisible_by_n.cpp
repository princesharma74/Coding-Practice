#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1352/C
/* Approach: */
void solve(){
    ui l = 0, r = ~0, a = 0;
    ui n, k; 
    cin >> n >> k;
    while(r > l){
        a = (r+l)/2; 
        if(( a - a/n ) < k){
            l = a+1; 
        }
        else r = a;
    }
    if(l - l/n == k) cout << l << endl; 
    else if(r - r/n == k) cout << r << endl;
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