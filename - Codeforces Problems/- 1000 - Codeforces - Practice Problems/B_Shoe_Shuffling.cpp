#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1691/B
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    map<ui, int> mp; 
    for(int i = 0; i < n; i++){
        ui tmp; 
        cin >> tmp; 
        mp[tmp]++;
    }

    ui prev_max = 1; 
    vector<ui> ans;
    for(auto p : mp){
        if(p.second == 1){
            cout << -1 << endl; 
            return; 
        }
        for(int i = 0; i < p.second; i++){
            ui cr = (prev_max + (p.second+1+i) % p.second);
            ans.push_back(cr);
        }
        prev_max +=p.second;
    }
    for(ui it : ans) cout << it << " ";
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