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
    vector<int> b(n); 
    for(int i = 0; i < n; i++) cin >> b[i]; 
    int ix = 0; 
    vector<int> ans; 
    ans.push_back(b[0]); 
    for(int i = 1; i < n; i++){
        if(ans[ix] <= b[i]){
            ans.push_back(b[i]); 
            ix++;
        }
        else{
            ans.push_back(b[i]);
            ans.push_back(b[i]);
            ix+=2;
        }
    }
    cout << ans.size() << endl; 
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " "; 
    cout << endl; 
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