#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1793/problem/B
/* Approach: */
void solve(){
    ll x, y; 
    cin >> x >> y; 
    cout << (x-1) << " " << x << " " << (x-1) << " ";
    if((y+1) == (x-1)){
        cout << y;
    }
    else{
        if(x-1 > y+1){
            for(int i = x-2; i > y+1; i--) cout << i << " ";
        }
        else{
            for(int i = x-2; i < y+1; i++) cout << i << " ";
        }
        cout << (y+1) << " " << y << " " << (y+1) << " ";
        if(x-1 > y+1){
            for(int i = x-2; i > y+1; i--) cout << i << " ";
        }
        else{
            for(int i = x-2; i < y+1; i++) cout << i << " ";
        }
    }
    cout << endl; 
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