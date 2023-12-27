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
    int mni = 0, mn = INT_MAX;
    for(int i = 0; i < n; i++){
        int a; 
        cin >> a; 
        if(mn > a){
            mn = a; 
            mni = i;
        }
    }
    cout << n-1 << endl; 
    for(int i = 0; i < n; i++){
        if(i == mni) continue;
        cout << mni + 1 << ' ' << i + 1 << ' ' << mn << ' ' << mn + abs(i - mni) << "\n";
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