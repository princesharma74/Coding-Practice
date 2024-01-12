#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1791/problem/D
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    string str; 
    cin >> str; 
    int s1[26] = {0};
    for(char &c : str) s1[c-'a']++;
    int s2[26] = {0};
    int ans = 0; 
    for(char &c : str){
        --s1[c - 'a']; 
        ++s2[c - 'a'];
        int cr = 0; 
        for(int i = 0; i < 26; i++){
            cr += (min(1, s1[i]) + min(1, s2[i]));
        }
        ans = max(cr, ans);
    }
    cout << ans << endl; 
}

int main(){
    int t;
    cin >> t; 
    while(t--){
        solve(); 
    }
    return 0;
}