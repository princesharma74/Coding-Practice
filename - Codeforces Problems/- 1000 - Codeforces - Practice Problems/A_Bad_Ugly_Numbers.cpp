#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1326/A
/* Approach: */

string generate(int n){
    string ans = "2";
    for(int i = 1; i < n; i++){
        ans+=("3");
    }
    return ans; 
}

void solve(){
    int n; 
    cin >> n; 
    if(n!=1) cout << generate(n) << endl; 
    else cout << -1 << endl; 
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