#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1744/problem/C
/* Approach: */
void solve(){
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s += s;
    int last = 0, mx = 0;
    for (int i = 2 * n; i >= 0; i--){
        if (s[i] == 'g')
            last = i;
        if (s[i] == c)
            mx = max(mx, last - i);
    }
    cout << mx << endl;
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