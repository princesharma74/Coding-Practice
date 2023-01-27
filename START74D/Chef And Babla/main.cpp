#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; 
    cin >> t; 
    while(t--){
        ll n; 
        cin >> n; 
        ll min = LLONG_MAX; 
        vector<ll> v(n);
        ll tmp; 
        for(ll i = 0; i < n; i++){
            cin >> tmp; 
            if(abs(min) > abs(tmp)) min = abs(tmp);
        }
        if(min) cout << (min - 1) << endl; 
        else cout << (-1) << endl; 
    }
    return 0;
}