#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

bool hasPC(ull num){
    ull cb = (ull)cbrt(num);
    if(cb*cb*cb == num) return true; 
    else return false;
}

//Problem Link: https://codeforces.com/problemset/problem/1490/C
/* Approach: */
void solve(){
    ull num; 
    cin >> num; 
    ull j = 1; 
    bool ans = false; 
    while(num - pow(j,3ull) > 0){
        if(hasPC((num - pow(j, 3ull)))){
            ans = true; 
            break; 
        }
        j++;
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