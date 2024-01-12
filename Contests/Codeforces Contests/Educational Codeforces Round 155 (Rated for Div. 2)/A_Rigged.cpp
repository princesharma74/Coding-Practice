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
    vector<pair<int, int>>  se; 
    for(int i = 0; i < n; i++){
        int s, e; 
        cin >> s >> e; 
        se.push_back({s, e});
    }
    int s1 = se[0].first, e1 = se[0].second;
    for(int i = 1; i < n; i++){
        if(se[i].first >= s1 && se[i].second >= e1){
            cout << -1 << endl; 
            return; 
        }
    }
    cout << s1 << endl; 
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