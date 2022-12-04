#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll N; 
    cin >> N; 
    vector<ll> v(N);
    for(ll i = 0; i < N; i++) cin >> v[i];
    ll hcf = 0;
    for(ll i = 0; i < N; i++){
        hcf = __gcd(hcf, v[i]);
    }
    
    ll count = 0;
    for(ll i = 0; i < N; i++){
        v[i]/=hcf; 
        while(v[i]%2==0){
            v[i]/=2;
            count++;
        }
        while(v[i]%3==0){
            v[i]/=3;
            count++;
        }
        if(v[i]!=1){
            count = -1; 
            break; 
        }
    }
    cout << count << endl; 
    return 0;
}