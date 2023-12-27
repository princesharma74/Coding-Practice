#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;
const unsigned int N = 100005;

void solve(){
    int n; 
    cin >> n; 
    vector<int> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i]; 
    vector<int> ans;
    int j = 1, ad = 0; 
    ans.push_back(j);
    for(int i = 1; i < n; i++){
        if(v[i-1] < v[i]) ans.push_back(--j);
        else ans.push_back(++j); 
        ad = min(ad, j);
    }
    if(ad < 0) ad = abs(ad - 1);
    for(int i = 0; i < n; i++) cout << (ans[i] + ad) << " ";
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