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
    int n, k;
    cin >> n >> k; 
    string str; 
    cin >> str; 
    unordered_map<char, int> mp; 
    for(char c : str) mp[c]++; 
    int od = 0;
    for(auto it : mp){
        if(it.second&1) od++;
    }
    if(od > 0) od--;
    cout << ((k >= od && k <= n) ? "YES" : "NO") << endl;
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