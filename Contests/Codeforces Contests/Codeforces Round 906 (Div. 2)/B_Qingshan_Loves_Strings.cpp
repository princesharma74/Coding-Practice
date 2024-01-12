#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

bool check(string s){
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            return false; 
        }
    }
    return true; 
}

void solve(){
    int n, m; 
    cin >> n >> m; 
    string s1; 
    cin >> s1; 
    string s2; 
    cin >> s2; 
    bool ans = false; 
    if(check(s1)){
        ans = true; 
    }
    else if(check(s2) && s2[0] == s2[m-1]){
        int _00 = 0, _11 = 0; 
        for(int i = 1; i < n; i++){
            if(s1[i] == s1[i-1] && s1[i] == '0') _00++;
            if(s1[i] == s1[i-1] && s1[i] == '1') _11++;
        }
        if(_00 && !_11 && s2[0] == '1') ans = true; 
        if(_11 && !_00 && s2[0] == '0') ans = true; 
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