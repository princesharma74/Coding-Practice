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
    vector<string> v(4); 
    for(int i = 0; i < 4; i++){
        string str; 
        cin >> str; 
        v[i] = str;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int ct = 0; 
            if(v[i][j] == '#') ct++; 
            if(v[i+1][j] == '#') ct++; 
            if(v[i][j+1] == '#') ct++;
            if(v[i+1][j+1] == '#') ct++;
            if(ct != 2){
                cout << "YES" << endl; 
                return;
            }
        }
    }
    cout << "NO" << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}