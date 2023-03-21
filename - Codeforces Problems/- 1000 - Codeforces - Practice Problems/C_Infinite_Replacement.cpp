#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1674/C
/* Approach: */
void solve(){
    string s, t; 
    cin >> s >> t; 
    bool hasA = false; 
    for(char c : t){
        if(c == 'a'){
            hasA = true; 
            break; 
        }
    }

    ll ct_a = 0; 
    for(char c : s) if(c == 'a') ct_a++;

    ll ans;
    if(hasA){
        if(t.size() == 1) ans = 1; 
        else ans = -1; 
    }
    else{
        ans = pow(2,ct_a);
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