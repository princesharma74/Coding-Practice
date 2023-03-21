#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
#define ui unsigned int

//Problem Link: https://codeforces.com/problemset/problem/1141/A
/* Approach: */
void solve(){
    ui n, m; 
    cin >> n >> m; 
    if(m%n == 0){
        ui quo = (m/n), ans = 0; 
        while(quo % 2 == 0 && quo){
            ans++; 
            quo/=2;
        }

        while(quo % 3 == 0 && quo){
            ans++; 
            quo/=3;
        }
        if(quo/2 || quo/3) cout << -1 << endl;
        else cout << ans << endl; 
    }
    else{
        cout << -1 << endl; 
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}