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
    string str; 
    cin >> str; 
    int n = str.length(); 
    bool flag = true; 
    vector<pair<int, int>> v; 
    for(int i = 0; i < n; i++){
        if(flag){
            if(str[i] == '2'){
                v.push_back({i, i});
                flag = false; 
            }
        }
        else if(str[i] != '2' || i == n-1){
            
        }
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