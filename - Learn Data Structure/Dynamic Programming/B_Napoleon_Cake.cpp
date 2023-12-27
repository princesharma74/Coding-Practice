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
    int tmp = 0; 
    for(int i = n-1; i >= 0; i--){
        if(tmp > 0) tmp--; 
        tmp = max(tmp, v[i]);
        v[i] = tmp; 
    }
    for(int i = 0; i < n; i++){
        cout << (v[i] > 0) << " ";
    }
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