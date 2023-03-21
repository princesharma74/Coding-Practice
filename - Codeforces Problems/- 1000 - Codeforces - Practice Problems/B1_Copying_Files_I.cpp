#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1769/B1
/* Approach: */
void solve(){
    int n; 
    cin >> n; 
    vector<int> cmf(n+1, 0);
    for(int i = 1; i <= n; i++){
        cin >> cmf[i];
        cmf[i] += cmf[i-1];
    }

    int j = 1; 
    set<int> st; 
    for(int i = 0; i <= cmf[n]; i++){
        int p1 = (i*100)/cmf[n];
        int p2 = ((i - cmf[j-1])*100)/(cmf[j] - cmf[j-1]);
        if(p1 == p2) st.insert(p1);

        if(i == cmf[j]) j++; 
    }

    for(int it : st) cout << it << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}