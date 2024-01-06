#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ul unsigned long
#define ull unsigned long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/contest/1800/problem/C1
/* Approach: */
void solve(){
    ull n; 
    cin >> n; 
    priority_queue<ull> pq; 
    ull ans = 0; 
    for(ull i = 0; i < n; i++){
        ull tmp;
        cin >> tmp; 
        if(tmp == 0 && !pq.empty()){
            ans += pq.top(); 
            pq.pop(); 
        }
        else pq.push(tmp);
    }
    cout << ans << endl;
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