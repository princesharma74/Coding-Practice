#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1789/problem/B
/* Approach: */
void solve(){
    int n, ct = 0; 
    cin >> n; 
    string str; 
    cin >> str; 
    bool flag = true;
    for(int i = 0; i < (n/2); i++){
        if(flag){
            if(str[i] != str[n-1-i]){
                flag = false; 
                ct++; 
            }
            if(ct == 2){
                cout << "No" << endl; 
                return; 
            }
        }
        else{
            if(str[i] == str[n-1-i]){
                flag = true; 
            }
        }
    }
    cout << "Yes" << endl; 
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