#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll S, c; 
    ll ans = 0; 
    cin >> S >> c; 
    if(c > 2*S){
        c = c - 2*S; 
        ans = S; 
        ans += c/4; 
    }
    else if(c < 2*S){
        ans = c/2; 
    }
    else{
        ans = S; 
    }
    cout << ans; 
    return 0;
}