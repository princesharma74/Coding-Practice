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
    map<int, int> mp; 
    cout << 1 << " ";
    mp[1]++;
    for(int i = 2; i <= n; i++){
        for(int j = i; j <= n; j *= 2){
            if(!mp[j]){
                cout << j << " ";
                mp[j]++;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(!mp[i]) cout << i << " ";
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