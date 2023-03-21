#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1761/B
/* Approach: */
void solve(){
    int n; 
    cin >> n;
    set<int> st; 
    for(int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp; 
        st.insert(tmp);
    }

    if(st.size() > 2) cout << n << endl; 
    else cout << (n/2 + 1) << endl; 
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