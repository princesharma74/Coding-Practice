#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int range(string s){
    int m = s.length();
    int idx = m;
    for(int i = 1; i <= m; i++){
        string sub = "";
        for(int j = 0; j < (m/i); j++) sub += (s.substr(0, i));
        if(sub == s){
            idx = i;
            break; 
        }
    }
    return idx; 
}

//Problem Link: https://codeforces.com/problemset/problem/1473/B
/* Approach: */
void solve(){
    string s, t; 
    cin >> s >> t; 
    int m = s.length(), n = t.length(); 
    if(s.substr(0, range(s)) == t.substr(0, range(t))){
        string unit = s.substr(0,range(s));
        int times = ( (m/range(s))*(n/range(s)) )/(__gcd(m/range(s),n/range(t)));
        string ans = "";
        for(int i = 0; i < times; i++) ans += unit;
        cout << ans << endl; 
    }
    else cout << -1 << endl; 
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