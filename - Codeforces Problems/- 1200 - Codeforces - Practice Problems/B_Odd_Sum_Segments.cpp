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
    int n, k; 
    cin >> n >> k; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i]; 
    vector<pair<int, int>> odds;
    for(int i = 0; i < n; i++){
        if(v[i]%2) odds.push_back({v[i], i+1}); 
    }
    int N = odds.size(); 
    if(k > N) cout << "NO" << endl; 
    else if((N - (k-1))%2){
        cout << "YES" << endl; 
        for(int i = 0; i < (k-1); i++) cout << odds[i].second << " "; 
        cout << n << endl; 
    } 
    else cout << "NO" << endl; 
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