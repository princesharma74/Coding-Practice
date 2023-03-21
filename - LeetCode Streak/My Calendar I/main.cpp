#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://leetcode.com/problems/my-calendar-i/
/* Approach: */
void solve(){
    vector<pair<int, int>> v{{1, 9}, {10, 20}, {15, 25}, {20, 30}};

    int it = 20; 
    int l = 0, r = v.size()-1, m; 
    while(r - l > 0){
        m = (l+r)/2;
        if(it > v[m].first) l = m+1; 
        else r = m; 
    }
    cout << l << " " << r << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}