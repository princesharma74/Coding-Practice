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
    str.push_back('R');
    int p = 0;
    int n = str.length(); 
    int mx = 0; 
    for(int i = 0; i < n; i++){
        if(str[i] == 'R'){
            mx = max(mx, (i - p + 1));
            p = i+1; 
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