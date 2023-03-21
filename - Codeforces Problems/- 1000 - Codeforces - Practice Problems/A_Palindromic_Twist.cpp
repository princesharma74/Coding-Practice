#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

bool isEqual(char a, char b){
    return (( (a-1) == (b-1) ) || ( (a-1) == (b+1) ) || ( (a+1) == (b-1) ) || ( (a+1) == (b+1) ));
}

//Problem Link: https://codeforces.com/problemset/problem/1027/A
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    string str; 
    cin >> str; 
    bool ans = true; 
    for(int i = 0; i < (n/2); i++){
        if (!isEqual(str[i], str[n - 1 - i])){ 
            ans = false;
            break; 
        }
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