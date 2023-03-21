#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/379/A
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    string str; 
    cin >> str; 
    int sum = 0;
    int ans = 0; 
    for(int i = 0; i < n; i++){
        ans = max((-1)*sum, ans);
        if(str[i] == ')') sum--;
        else sum++;
    }
    cout << ans << endl;
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