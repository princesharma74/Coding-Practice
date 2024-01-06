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
    vector<string> vstr(n);
    for(int i = 0; i < n; i++){
        cin >> vstr[i];
    }

    string str = "vika"; 
    int idx = 0; 
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            if(vstr[i][j] == str[idx]){
                idx++;
                break; 
            }
        }
    }
    cout << (idx == 4 ? "YES" : "NO") << endl; 
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