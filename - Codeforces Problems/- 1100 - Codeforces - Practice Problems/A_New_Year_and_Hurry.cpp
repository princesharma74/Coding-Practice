#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/750/A
/* Approach: */
void solve(){
    int n, k; 
    cin >> n >> k; 
    int ans = 0;
    for(int i = 1; i <= 10; i++){
        if(240 - k < (5*i*(i+1)/2)){
            ans = i;
            break;
        }
    }
    cout << min(n,(ans - 1)) << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}