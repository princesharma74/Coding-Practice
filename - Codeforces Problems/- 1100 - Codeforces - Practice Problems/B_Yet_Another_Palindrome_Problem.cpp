#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1324/B
/* Approach: */
void solve(){
    unordered_map<int, vector<int>> mp; 
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp; 
        mp[tmp].push_back(i);
    }
    for(auto it : mp){
        sort(it.second.begin(), it.second.end()); 
        int mx = *( --it.second.end() );
        int mn = *(it.second.begin());
        if(mx - mn > 1){
            cout << "YES" << endl; 
            return; 
        }
    }
    cout << "NO" << endl; 
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