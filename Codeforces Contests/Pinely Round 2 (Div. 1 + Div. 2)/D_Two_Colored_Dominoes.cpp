#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

void solve(){
    int n, m; 
    cin >> n >> m; 
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        string str; 
        cin >> str; 
        v[i] = str; 
    }
    bool check1 = true, check2 = true; 
    for(int i = 0; i < n; i++){
        int ct = 0; 
        for(int j = 0; j < m; j++){
            if(v[i][j] >= 'A' && v[i][j] <= 'Z') ct++;
        }
        if(ct%2 != 0) check1 = false; 
    }

    for(int j = 0; j < m; j++){
        int ct = 0; 
        for(int i = 0; i < n; i++){
            if(v[i][j] >= 'A' && v[i][j] <= 'Z') ct++;
        }
        if(ct%2 != 0) check2 = false; 
    }
    if(check1 && check2){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(v[i][j] >= 'A' && v[i][j] <= 'Z'){
                    cout << ((i+j)%2 ? "B" : "W");
                }
                else cout << ".";
            }
            cout << endl; 
        }
    }
    else{
        cout << -1 << endl;
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