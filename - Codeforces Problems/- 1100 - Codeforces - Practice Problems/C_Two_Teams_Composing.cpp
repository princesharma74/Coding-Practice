#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1335/C
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    map<int, int> mp; 
    for(int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp; 
        mp[tmp]++;
    }
    int mil = 0; 
    for(auto it : mp){
        mil = max(mil, it.second);
    }
    int mdl = mp.size(); 
    int ans = min(mil, mdl);
    if(mil != mdl) cout << ans << endl; 
    else cout << (ans - 1) << endl; 

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