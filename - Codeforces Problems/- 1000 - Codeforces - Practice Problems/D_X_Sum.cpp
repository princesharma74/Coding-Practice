#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int diagSum(vector<vector<int>> &v, int x, int y){
    int sum = 0;
    int n = v.size(), m = v[0].size(); 
    int i = x - min(x, y), j = y - min(x,y);
    while(i != n && j != m){
        sum += v[i][j];
        i++; j++; 
    }

    int st = x + y;
    int sum1 = 0; 
    for(int l = 0; l <= st; l++){
        if(l >= 0 && l < n && (st-l) >= 0 && (st - l) < m){ 
            sum += v[l][st-l];
        }
    }
    sum -= v[x][y];
    return sum; 
}

//Problem Link: https://codeforces.com/problemset/problem/1676/D
/* Approach: */
void solve(){
    int n, m; 
    cin >> n >> m; 
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> v[i][j];
    int mx = 0; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            mx = max(mx, diagSum(v, i, j));
        }
    }
    cout << mx << endl; 
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