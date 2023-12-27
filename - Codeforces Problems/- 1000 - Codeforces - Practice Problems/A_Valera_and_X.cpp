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
    int n; 
    cin >> n;
    vector<string> sq; 
    for(int i = 0; i < n; i++){
        string str; 
        cin >> str;
        sq.push_back(str); 
    }
    char dg = sq[0][0], ndg = sq[0][1];
    if(dg == ndg){
        cout << "NO" << endl; 
        return;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(( i == j || i == (n-1-j))){
                if(sq[i][j] != dg){
                    cout << "NO" << endl; 
                    return; 
                }
            }
            else if(sq[i][j] != ndg){
                cout << "NO" << endl; 
                return; 
            }
        }
    }
    cout << "YES" << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}