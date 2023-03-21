#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/499/B
/* Approach: */
void solve(){
    unordered_map<string, string> mp; 
    int n, m; 
    cin >> n >> m; 
    for(int i = 0; i < m; i++){
        string str1, str2; 
        cin >> str1 >> str2; 
        string pref = str1.length() <= str2.length() ? str1 : str2;
        mp[str1] = pref;
    }
    for(int i = 0; i < n; i++){
        string str3; 
        cin >> str3; 
        cout << mp[str3] << " ";
    }
    cout << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}