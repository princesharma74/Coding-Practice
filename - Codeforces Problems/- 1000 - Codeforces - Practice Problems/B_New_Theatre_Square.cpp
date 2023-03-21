#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1359/B
/* Approach: */
void solve(){
    int n, m, x, y; 
    cin >> n >> m >> x >> y; 
    int sg_d = 0, db_d = 0; 
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
    int cst = 0, cd_cnt = 0; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == '*'){
                db_d += (cd_cnt/2);
                cd_cnt = 0;
            }
            else cd_cnt++;

            if(v[i][j] == '.') sg_d++;
        }
        db_d += (cd_cnt/2);
        cd_cnt = 0; 
    }

    sg_d -= (2*db_d);

    cst = ( min(2*x,y)*db_d );
    cst += sg_d*x; 
    cout << cst << endl; 
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