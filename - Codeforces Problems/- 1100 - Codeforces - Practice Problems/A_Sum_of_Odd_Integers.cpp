#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1327/A
/* Approach: */
void solve(){
    ui n, k;
    cin >> n >> k;
    if((n&1) == (k&1)){
        if(k > (int)sqrt(n)) cout << "NO" << endl; 
        else cout << "YES" << endl; 
    }
    else cout << "NO" << endl; 
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