#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define PI 3.1415926535897932384626433832795
const unsigned int mod = 1000000007;

//Problem Link: https://codeforces.com/problemset/problem/1760/D
/* Approach:
void solve(){
    ll n; 
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    bool left = false; 

    int ct = 0; 

    if(n > 2){
        if(v[1] == v[0]) left = true; 
        else if(v[1] > v[0]) ct++;

        for(ll i = 1; i < n-1; i++){
            if (v[i - 1] > v[i] && v[i + 1] > v[i]){
                ct++;
            }
            else if(v[i-1] > v[i] && v[i] == v[i+1]) left = true;
            else if(v[i-1] == v[i] && v[i+1] > v[i] && left){
                ct++;
            }
            else if(v[i] != v[i+1]) left = false; 
        }

        if(v[n-2] == v[n-1] && left){
            ct++;
        }
        else if(v[n-2] > v[n-1]) ct++;

        if(ct == 1) cout << "YES" << endl; 
        else cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl; 
    }
}
*/

void solve(){
    ll n; 
    cin >> n; 
    vector<ll> v;
    for(ll i = 0; i < n; i++){
        ll tmp;
        cin >> tmp; 
        if(i == 0 || tmp != v.back()) v.push_back(tmp);
    }

    ll ct = 0;

    for(ll i = 0; i < v.size(); i++){
        if((i == 0 || v[i-1] > v[i]) && ( i == v.size() - 1 || v[i] < v[i+1])) ct++; 
    }
    if(ct == 1) cout << "YES" << endl; 
    else cout << "NO" << endl; 
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