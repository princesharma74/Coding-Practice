#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1690/D
/* Approach: */
void solve(){
    int n, k; 
    cin >> n >> k; 
    string str; 
    cin >> str; 
    int nW = 0; 
    for(int i = 0; i < k; i++){
        if(str[i] == 'W') nW++;
    }
    
    int ans = INT_MAX;
    for(int i = 0; i+k-1 < n; i++){
        ans = min(ans, nW);
        if(str[i] == 'W') nW--;
        if(i+k < n && str[i+k] == 'W') nW++;
    }
    cout << ans << endl; 
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