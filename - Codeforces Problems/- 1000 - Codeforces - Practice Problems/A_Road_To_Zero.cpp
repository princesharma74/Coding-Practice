#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1342/A
/* Approach: */
void solve(){
    ll x, y; 
    cin >> x >> y; 
    ll a, b; 
    cin >> a >> b; 
    ll cost = 0; 
    if(b/2 < a){
        cost = (min(abs(x), abs(y)))*b; 
        if(abs(x) < abs(y)){
            y-=x; 
            x = 0; 
        }
        else{
            x-=y; 
            y = 0;
        }
        cost += (max(abs(x), abs(y)))*a; 
    }
    else{
        cost = (abs(x) + abs(y))*a;
    }
    cout << cost << endl; 
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