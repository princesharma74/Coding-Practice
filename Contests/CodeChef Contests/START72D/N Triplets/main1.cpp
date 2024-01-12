#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; 
    cin >> t;
    while(t--){
        ll n; 
        cin >> n; 
        vector<ll> v; 
        v.push_back(1);
        for(ll i = 2; i*i < n; i++){
            if(n%i == 0){
                v.push_back(i);
                v.push_back(n/i);
                break; 
            }
        }
        if(v.size()!=3) cout << -1 << endl; 
        else{
            for(ll &it : v) cout << it << " ";
            cout << endl; 
        }
    }
    return 0;
}