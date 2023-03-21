#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

bool isPrime(ull x){
    if(x == 1) return false; 
    bool ans = true; 
    for(ull i = 2; i <= x/i; i++){
        if(x%i == 0){
            ans = false; 
            break; 
        }
    }
    return ans; 
}

//Problem Link: https://codeforces.com/problemset/problem/230/B
/* Approach: */
void solve(){
    ull x; 
    cin >> x; 
    ull st = (ull)(sqrt(x));
    if(st * st == x){
        if(isPrime(st)) cout << "YES" << endl; 
        else cout << "NO" << endl; 
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