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
    vector<int> check(n+1), v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        check[v[i]]++; 
    }
    for(int i = 0; i <= n; i++){
        if(!check[i]){
            v.insert(v.begin(), i);
            break; 
        }
    }
    vector<int> ans(n+1);
    for(int i = 0; i <= n; i++){
        ans[(i+k)%(n+1)] = v[i];
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << " \n"[i==n];
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