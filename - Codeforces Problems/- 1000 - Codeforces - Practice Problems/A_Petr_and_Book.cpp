#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/139/problem/A
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    int wk = 0; 
    vector<int> v(7);
    int lst_non_zero = 1; 
    for(int i = 0; i < 7; i++){
        cin >> v[i];
        if(v[i]) lst_non_zero = i + 1; 
        wk += v[i]; 
    }

    n%=wk; 
    if(!n){
        cout << lst_non_zero << endl; 
        return;
    }

    int i = 0; 
    while(n > 0){
        n-=v[i]; 
        i++;
    }
    cout << i << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}