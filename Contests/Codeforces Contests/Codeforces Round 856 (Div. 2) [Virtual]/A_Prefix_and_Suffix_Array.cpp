#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1794/problem/A
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    vector<string> str; 
    for(int i = 0; i < ( 2*n-2 ); i++){
        string tmp; 
        cin >> tmp; 
        if(tmp.length() == n-1) str.push_back(tmp);
    }

    string fm_str = "";
    if(str[0].substr(1,n-2) == str[1].substr(0,n-2)){
        fm_str = str[0]; 
        fm_str.push_back(str[1][n-2]);
    }
    else{
        fm_str = str[1]; 
        fm_str.push_back(str[0][n-2]);
    }

    bool ans = true; 
    for(int i = 0; i < n/2; i++){
        if(fm_str[i] != fm_str[n-i-1]){
            ans = false;
            break; 
        }
    }
    cout << (ans ? "YES" : "NO") << endl; 
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