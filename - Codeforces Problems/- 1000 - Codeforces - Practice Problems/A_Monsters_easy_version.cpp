#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1784/A
/* Approach: */
/*
void solve(){
    multiset<int> s; 
    int n; 
    cin >> n; 
    for(int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp; 
        s.insert(tmp);
    }

    int i = *s.begin(), ans = 0;
    for(int lv : s){
        if(lv != *s.begin()) i++;
        ans += (lv - i);
    }
    cout << ans << endl; 
}
*/

void solve(){
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int &it : v) cin >> it; 
    sort(v.begin(), v.end());
    ll ans = *v.begin() - 1; 
    v[0] = 1;

    for(int i = 0; i < n-1; i++){
        if ((v[i + 1] - v[i]) != 0 && (v[i + 1] - v[i]) != 1){
            ans += (v[i + 1] - v[i]) - 1;
            v[i+1] -= ((v[i + 1] - v[i]) - 1);
        }
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