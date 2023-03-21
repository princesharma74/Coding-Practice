#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1244/B
/* Approach: */
void solve(){
    int n;
    cin >> n; 
    string str; 
    cin >> str; 
    int i = 0, j = n-1;
    bool ib = true, jb = true;
    while(ib || jb){
        if(ib){
            if(str[i] != '1' && i < n) i++; 
            else ib = false;
        }
        if(jb){
            if(str[j] != '1' && j >= 0) j--; 
            else jb = false; 
        }
    }

    if(j < 0 || i > n-1){
        cout << str.length() << endl; 
    }
    else{
        if(i >= (n-1)-j) cout << (j+1)*2 << endl; 
        else cout << (n-i)*2 << endl; 
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