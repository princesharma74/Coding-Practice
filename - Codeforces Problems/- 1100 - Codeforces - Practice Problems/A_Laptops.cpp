#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/456/A
/* Approach: */
void solve(){
    int n;
    cin >> n; 
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int a, b; 
        cin >> a >> b; 
        v.push_back({a, b});
    }

    sort(v.begin(), v.end());
    bool pr_alx = false; 
    for(int i = 0; i < n-1; i++){
        if(v[i].first < v[i+1].first && v[i].second > v[i+1].second) pr_alx = true; 
    }

    cout << (pr_alx ? "Happy Alex" : "Poor Alex") << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}