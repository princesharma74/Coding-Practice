#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1800/problem/B
/* Approach: */
void solve(){
    int n, k; 
    cin >> n >> k; 
    string str; 
    cin >> str; 
    int up[26] = {0}, lw[26] = {0};
    for(char c : str){
        (c >= 'a' && c <= 'z') ? lw[c - 'a']++ : up[c - 'A']++;
    }
    
    int brls = 0; 
    for(int i = 0; i < 26; i++){
        brls += min(up[i], lw[i]);
        int si = ( max(up[i], lw[i]) - min(up[i], lw[i]) )/2;
        if(k <= si){
            brls += k; 
            k = 0;
        }
        else{
           brls += si; 
           k -= si; 
        }
    }
    cout << brls << endl;
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