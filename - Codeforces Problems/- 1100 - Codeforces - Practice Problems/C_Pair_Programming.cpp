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
    int k, n, m; 
    cin >> k >> n >> m; 
    vector<int> a(n), b(m), ans; 
    for(int &it : a) cin >> it; 
    for(int &it : b) cin >> it; 

    int i = 0, j = 0; 
    while(i < n && j < m){
        if(a[i] < b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]); 
            j++; 
        }
    }

    while(i < n){
        ans.push_back(a[i]);
        i++; 
    }

    while(j < m){
        ans.push_back(b[j]);
        j++; 
    }

    bool found = true; 
    n = ans.size(); 
    for(int i = 0; i < n; i++){
        if(ans[i] > k){
            found = false; 
            break; 
        }
        else{
            if(ans[i] == 0) k++; 
        }
    }
    
    if(found){
        for(int i = 0; i < n; i++) cout << ans[i] << " \n"[i==n-1];
    }
    else cout << -1 << endl; 
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