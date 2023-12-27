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
    vector<int> ans(n, 1); 
    for(int i = 2; i <= n+1; i++){
        if(ans[i-2] == 1){
            for(int j = i*2; j <= n+1; j += i){
                ans[j-2] = 2; 
            }
        }
    }
    cout << (n <= 2 ? 1 : 2) << endl; 
    for(int it : ans) cout << it << " "; 
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}