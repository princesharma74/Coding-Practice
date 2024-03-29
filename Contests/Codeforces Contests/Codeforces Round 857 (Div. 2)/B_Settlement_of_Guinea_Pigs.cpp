#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1802/problem/B
/* Approach: */
void solve(){
    int n;
    cin >> n; 
    int track = 0, _1 = 0, ans = 0; 
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp; 
        if(tmp == 2){
            if(_1) track = (_1/2) + 1;
        }
        else{
            _1++;
            track++;
        }
        ans = max(ans, track);
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