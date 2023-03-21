#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

int ans[100][100], mat[100][100], bomn[2][100];
//Problem Link: https://codeforces.com/problemset/problem/486/B
/* Approach: */
void solve(){
    int m, n; 
    cin >> m >> n;
    bool al_col = true, al_row = true, at_lst = false;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
            if(mat[i][j]) at_lst = true;
            if(!mat[i][j]){
                bomn[0][i]++;
                bomn[1][j]++;
            }
        }
    }

    for(int i = 0; i < max(m,n); i++){
        if(i < m){
            if(!bomn[0][i]) al_col = false;
        }
        if(i < n){
            if(!bomn[1][i]) al_row = false; 
        }
    }

    if(( al_col || al_row ) && at_lst){
        cout << "NO" << endl; 
        return; 
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] && bomn[0][i] && bomn[1][j]){
                cout << "NO" << endl; 
                return; 
            }
            if(!(bomn[0][i] || bomn[1][j])){
                ans[i][j] = 1; 
            }
        }
    }
    cout << "YES" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) cout << ans[i][j] << " ";
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}