#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1772/problem/C
/* Approach: */
void solve(){
    int k, n; 
    cin >> k >> n; 
    int sv = 1; 
    if(k!=n){
        bool flag = false;
        for(int i = 0; i < k; i++){
            if((n - (sv + i)) < k-i){
                flag = true;
            }
            if(flag){
                sv++; 
            }
            else{
                sv += i; 
            }
            cout << sv << " ";
        }
        cout << endl; 
    }
    else{
        for(int i = 1; i <= n; i++) cout << i << " ";
        cout << endl; 
    }
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