#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1802/problem/A
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    int pos = 0, neg = 0; 
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if(tmp > 0) pos++; 
        else neg++; 
    }

    int j = 1; 
    for(int i = 1; i <= n; i++){
        if(i <= pos) cout << i << " \n"[i==n];
        else{ 
            cout << (pos - j) << " \n"[i==n];
            j++;
        }
    }
    
    j = 1; 
    for(int i = 1; i <= n; i++){
        if(i <= 2*neg) cout << (i&1) << " \n"[i==n];
        else{
            cout << j << " \n"[i==n];
            j++;
        }
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