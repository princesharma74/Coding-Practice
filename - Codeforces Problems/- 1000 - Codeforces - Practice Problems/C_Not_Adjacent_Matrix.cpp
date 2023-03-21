#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1520/C
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    if(n==2){cout << -1 << endl; return;}
    int l = 0, lim = pow(n,2);
    for(int i = 1; i <= lim && l < lim; i+=2, l++){
        cout << i << " ";
        if(l%n == (n-1)) cout << endl;
    }
    for(int i = 2; i <= lim && l < lim; i+=2, l++){
        cout << i << " ";
        if(l%n == (n-1)) cout << endl;
    }
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