#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll N; 
    cin >> N; 
    vector<vector<ll>> v(N, vector<ll>(3)); 
    ll b = 0;; 
    for(ll i = 0; i < N; i++){
        cin >> v[i][0];
        b+=v[i][0];
        v[i][1] = b; 
    }
    v.pop_back();
    for(ll i = 0; i < N-1; i++){
        v[i][2] = abs(v[i][1] - b + v[i][1]);
    }
    
    ll i = 0; 
    ll min = v[i][2];
    for(ll j = 0; j < N-1; j++){
        if(min > v[j][2]){
            min = v[j][2];
            i = j; 
        }
    }
    cout << v[i][2] << endl; 
    return 0;
}