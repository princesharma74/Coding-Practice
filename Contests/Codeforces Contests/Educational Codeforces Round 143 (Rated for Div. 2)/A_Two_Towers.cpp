#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1795/problem/0
/* Approach: */
void solve(){
    int n, m; 
    cin >> n >> m;
    string str1, str2, str3; 
    cin >> str1 >> str2; 
    reverse(str2.begin(), str2.end());
    str3 = str1 + str2; 
    int ct = 0; 
    for(int i = 0; i < n+m-1; i++){
        if(str3[i] == str3[i+1]) ct++; 
    }
    cout << (ct > 1 ? "NO" : "YES") << endl; 
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