#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/43/A
/* Approach: */
void solve(){
    int n; 
    cin >> n;
    unordered_map<string, int> mp; 
    for(int i = 0; i < n; i++){
        string str;
        cin >> str; 
        mp[str]++; 
    }
    map<int, string> mp1; 
    for(auto it : mp){
        mp1.insert({it.second, it.first});
    }
    cout << (--mp1.end())->second << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}