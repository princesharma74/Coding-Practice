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
    map<int, int> mp; 
    for(int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp;
        mp[tmp]++;
    }
    if(n <= 2){
        cout << "YES" << endl;
    }
    else{
        int sz = mp.size();
        if(sz <= 2){
            int dif = abs( ( ( mp.begin() )->second ) - (( ++mp.begin() )->second) );
            if(sz == 1 || dif <= 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
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