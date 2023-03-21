#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1732/A
/* Approach: */
void solve(){
    ull n; 
    cin >> n; 
    vector<ull> v(n);
    int cst = 0; 
    ull cr_gcd = 0;
    for (ull &it : v){ 
        cin >> it;
        cr_gcd = __gcd(cr_gcd, it);
    }
    if(cr_gcd != 1){
        if(__gcd(cr_gcd, n) == 1) cst = 1; 
        else if(__gcd(cr_gcd, n-1) == 1) cst = 2;
        else cst = 3; 
    }
    cout << cst << endl; 
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