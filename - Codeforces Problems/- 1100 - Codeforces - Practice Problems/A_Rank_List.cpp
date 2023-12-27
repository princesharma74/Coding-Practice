#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

struct Compare{
    bool operator()(pair<int, int> p1, pair<int, int> p2) const{
        if(p1.first == p2.first) return p1.second < p2.second;
        return p1.first > p2.first; 
    }
};

void solve(){
    int n, k; 
    cin >> n >> k; 
    map<pair<int, int>, int, Compare> mp; 
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b; 
        mp[{a, b}]++; 
    }
    int sum = 0, ans;  
    for(auto it : mp){
        if(sum+it.second >= k){
            ans = it.second; 
            break; 
        }
        sum += it.second;
    }
    cout << ans << endl; 
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0;
}